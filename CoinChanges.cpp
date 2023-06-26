#include <bits/stdc++.h>
using namespace std;
long getWays(int n, vector<long> c) {
    vector<long> minacum(n+1);
    minacum[0]=0;
    long minimum;
    for(int i=1;i<=n;i++){
        minimum=1000;
        for(int j=0;j<c.size();j++){
            if(i-c[j]<0){
                continue;
            }
            minimum=min(minimum,minacum[i-c[j]]);
        }
        minacum[i]=minimum+1;
    }
    return minacum[n];
}
int main(){
    int n,l;
    cin>>n>>l;
    vector<long> coins(l);
    for(long i=0;i<l;i++){
        cin>>coins[i];
    }
    cout<<getWays(n,coins);
    return 0;
}