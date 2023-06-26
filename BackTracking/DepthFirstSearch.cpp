#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>> vertices={
        {1, {3, 4, 5}},
        {2, {3, 5}},
        {3, {4, 5}},
        {4, {6, 7}},
        {5, {7, 8}},
        {6, {8}},
        {7, {}},
        {8, {2}}
    };
vector<bool> visitados(8);
void dfs(string path,int start,int end){
    if(start==end){
        cout<<path<<endl;
        return;
    }
    for(int i=0;i<(int)vertices[start].size();i++){
        if(!visitados[vertices[start][i]]){
            visitados[vertices[start][i]]=true;
            dfs(path+to_string(vertices[start][i]),vertices[start][i],end);
            visitados[vertices[start][i]]=false;
        }
    }
    return;
} 
int main(){
    dfs("",1,7);
    return 0;
}