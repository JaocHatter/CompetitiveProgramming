#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll memoization[1000];
int canSum(int n,vector<int> coins){
    if(n==0) return 1;
    if(n<0) return 0;
    if(memoization[n]!=0) return memoization[n];
    for(int i=0;i<coins.size();i++){
        if(n-coins[i]>=0){
            memoization[n]+=canSum(n-coins[i],coins);
        }
    }
    return memoization[n];
}
int main(){
    fill(memoization,memoization+1000,0);
    int n,k;
    cin>>n>>k;
    vector<int> coins(k);
    for(int i=0;i<k;i++) cin>>coins[i];
    canSum(n,coins);
    for(int i=0;i<100;i++) cout<<memoization[i]<<" ";
    cout<<memoization[n];
    return 0;
}