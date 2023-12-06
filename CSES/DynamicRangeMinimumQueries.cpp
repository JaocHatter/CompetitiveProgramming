#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxN = 2e5;
const ll MAX_N = 10e10;
ll max_size;
int getMid(int s,int e){
    return s+(e-s)/2;
}		
ll getMin(ll *root,int ss,int se, int qs, int qe,int s_idx){
    if( qs<=ss && qe>=se){
        return root[s_idx];
    }
    if( qs > se || qe < ss ) return MAX_N;
    //sigo dividiendo el arbol en 2
    int mid = getMid(ss,se);
    return min(getMin(root,ss,mid,qs,qe,2*s_idx+1),getMin(root,mid+1,se,qs,qe,2*s_idx+2));
}
//Ahora creemos el arbol ps
ll constructor(ll *root,ll arr[],int ss,int se,int s_idx){
    if(ss == se){
        root[s_idx] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss,se);
    root[s_idx] = min(constructor(root,arr,ss,mid,2*s_idx+1),constructor(root,arr,mid+1,se,2*s_idx+2));
    return root[s_idx]; 
}
ll *constructST(ll arr[], int n){ 
    int x = (int)(ceil(log2(n))); 
    max_size = 2*(int)pow(2, x) - 1;    
    ll *st = new ll[max_size]; 
    constructor(st,arr, 0, n-1, 0);  
    return st; 
} 
ll update(ll *st,int ss, int se, int s_idx, int i,int x){
    if( i < ss || se < i) return st[s_idx];
    int mid = getMid(ss,se);
    if(ss!=se){
        st[s_idx] = min(update(st,ss,mid,2*s_idx+1,i,x),
        update(st,mid+1,se,2*s_idx+2,i,x));
    }else st[s_idx] = x;
	return st[s_idx];
    /*int mid;
    while(se != se){
        mid = getMid(ss,se);
            s_idx = 2*s_idx + 1;
        if(i<=mid){
            se = mid;
        }
        else{
            s_idx = 2*s_idx + 2;
            ss = mid+1;
        }
    }
    st[se] = x;*/
}
int main(){
    int n,q;
    cin>>n>>q;
    ll arr[maxN];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    ll *segment_tree = constructST(arr,n);
    int o,a,b,aux;
    while(q--){
        cin>>o>>a>>b;
        if(o%2){
            arr[a-1] = b;
            aux=update(segment_tree,0,n-1,0,a-1,b);
        }else{
            cout<<getMin(segment_tree,0,n-1,a-1,b-1,0)<<endl;
        }
    }
    return 0;
}