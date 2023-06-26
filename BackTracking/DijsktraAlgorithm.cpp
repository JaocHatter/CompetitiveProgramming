#include <bits/stdc++.h>
using namespace std;
map<int,vector<pair<int,int>>> grafo;
int dijkstra(int node,int end){
    vector<int> costos(7,INT_MAX);
    vector<bool> visited(7);
    int min_dist,min_node;
    costos[node]=0;
    while(!visited[end]){
        min_dist=INT_MAX;
        min_node=-1;
        //encontramos el menor
        for(int i=1;i<=6;i++){
            if(!visited[i] and costos[i]<min_dist){
                min_dist=costos[i];
                min_node=i;
            }
        }
        if(min_node==-1) break;
        visited[min_node]=1;
        for(pair<int,int> it:grafo[min_node]){
            costos[it.first]=min(min_dist+it.second,costos[it.first]);
        }
    }
    return costos[end];
}
int main(){
    grafo[1] = {{2, 10}, {3, 20}};
    
    // Nodo 2 conectado con el nodo 1 con peso 10, el nodo 4 con peso 30 y el nodo 5 con peso 50
    grafo[2] = {{1, 10}, {4, 30}, {5, 50}};
    
    // Nodo 3 conectado con el nodo 1 con peso 20, el nodo 4 con peso 40 y el nodo 6 con peso 60
    grafo[3] = {{1, 20}, {4, 40}, {6, 80}};
    
    // Nodo 4 conectado con el nodo 2 con peso 30, el nodo 3 con peso 40 y el nodo 5 con peso 70
    grafo[4] = {{2, 30}, {3, 40}, {5, 30}};

    // Nodo 5 conectado con el nodo 2 con peso 50, el nodo 4 con peso 70 y el nodo 6 con peso 80
    grafo[5] = {{2, 50}, {4, 30}, {6, 20}};

    // Nodo 6 conectado con el nodo 3 con peso 60 y el nodo 5 con peso 80
    grafo[6] = {{3, 80}, {5, 20}};
    //Algorithm
        //...
    cout<<"Minima distancia del nodo 1 al nodo 6: "<<dijkstra(2,3)<<endl; 
    return 0;
}