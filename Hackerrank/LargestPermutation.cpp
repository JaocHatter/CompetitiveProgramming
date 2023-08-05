#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define MAX 100001
using namespace std;
int main(){
    int n,k,temp;
    cin>>n>>k;
    int ord[n+1],nums[n+1];
    forn(i,n){
        cin>>temp;
        ord[i+1]=temp; //array original
        nums[temp]=i+1; //keep the position!
    }
    for(int i=n;i>=1;i--){
        if(k==0) break;
        if(ord[n-i+1]!=i){
            int temp=ord[n-i+1];
            swap(ord[n-i+1],ord[nums[i]]);
            nums[temp]=nums[i];
            nums[i]=n-i+1;
            k--;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ord[i]<<" ";
    }
    return 0; 
}