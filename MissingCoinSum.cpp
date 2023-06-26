#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    ll sum=0;
    cin>>n;
    vector<int> coins(n+1);
    coins[0]=0;
    for(int i=1;i<=n;i++){
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end());
    for(int i=1;i<=n;i++){
        sum+=coins[i-1];
        if(coins[i]>sum+1){
            cout<<sum+1;
            return 0;
        }
    }
    sum+=coins[n];
    cout<<sum+1;
    return 0;                   
}