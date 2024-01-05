#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(int i = 0;i < n; i++)
const int MOD = 1000000007;
int main(){
    int n,x;
    cin>>n>>x;
    int coins[n];
    forn(i,n) cin>>coins[i];
    ll ways[x+1] = {};
    ways[0] = 1;
    for(int i = 0; i <= x ; i++){
        for(int j = 0; j < n ;j++){
            if(i - coins[j] >= 0){
                ways[i] += ways[i-coins[j]];
                ways[i]%=MOD;
            }
        }
    }
    cout<<ways[x];
    return 0;
}