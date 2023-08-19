#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
ll total=0;
bool memoization[251];
bool change(int n,vector<int> coins,int it){
    if(n==0){
        total++;
        return false;
    }
    if(n<0) return true;
    if(memoization[n]) return false;
    bool temp=true;
    for(int i=it;i<coins.size();i++){
        temp = ( temp && change(n-coins[i],coins,i));
    }
    memoization[n]=temp;
    return memoization[n];
}
int main(){
    fill(memoization,memoization+251,false);
    int n,k,temp;
    cin>>n>>k;
    vector<int> coins;
    forn(i,k){
        cin>>temp;
        if(temp>n) continue;
        coins.pb(temp);
    }
    sort(coins.begin(),coins.end());
    //solve
    change(n,coins,0);
    for(int i=0;i<251;i++) cout<<memoization[i]<<" ";
    cout<<total;
    return 0;
}