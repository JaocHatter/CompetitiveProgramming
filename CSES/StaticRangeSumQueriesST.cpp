#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxN = 2e5;
int getMid(int s,int e){
    return s+(e-s)/2;
}
//esta funcion verifica si el numero de los nodos
// se encuentra entre tus parametros establecidos 
/*
ss: segment tree start
se: segment tree end
*/
ll getSum(ll *root,int ss,int se, int qs, int qe,int s_idx){
    if( qs<=ss && qe>=se){
        return root[s_idx];
    }
    if( qs > se || qe < ss ) return 0;
    //sigo dividiendo el arbol en 2
    int mid = getMid(ss,se);
    return getSum(root,ss,mid,qs,qe,2*s_idx+1) + 
        getSum(root,mid+1,se,qs,qe,2*s_idx+2);
}
//Ahora creemos el arbol ps
ll constructor(ll *root,ll arr[],int ss,int se,int s_idx){
    if(ss == se){
        root[s_idx] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss,se);
    root[s_idx] = constructor(root,arr,ss,mid,2*s_idx+1)+
    constructor(root,arr,mid+1,se,2*s_idx+2);
    return root[s_idx]; 
}
ll *constructST(ll arr[], int n){ 
    // Allocate memory for the segment tree 
    //Height of segment tree 
    int x = (int)(ceil(log2(n))); 
    //Maximum size of segment tree 
    ll max_size = 2*(int)pow(2, x) - 1; 
    // Allocate memory 
    ll *st = new ll[max_size]; 
    // Fill the allocated memory st 
    constructor(st,arr, 0, n-1, 0); 
    // Return the constructed segment tree 
    return st; 
} 
int main(){
    int n,q;
    cin>>n>>q;
    ll arr[maxN];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    ll *segment_tree = constructST(arr,n);
    int a,b;
    while(q--){
        cin>>a>>b;
        cout<<getSum(segment_tree,0,n-1,a-1,b-1,0)<<endl;
    }
    return 0;
}