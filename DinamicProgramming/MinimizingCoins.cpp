#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i = 0;i < n; i++)
#define ll long long
int main(){
    int n,x;
    cin>>n>>x;
    int coins[n];
    forn(i,n) cin>>coins[i];
    ll steps[x+1] = {};
    steps[0] = 1;
    //algorithm
    for(int i = 1; i <= x ; i++){
        for(int j = 0; j < n ;j++){
            if(i-coins[j] < 0) continue;
            if( steps[i - coins[j]] != 0 ){
                steps[i] = steps[i] == 0? steps[i-coins[j]]+ 1:min(steps[i-coins[j]] +1 , steps[i]);
            }
        }
    }
    if(steps[x] == 0){
        cout<<-1;
        return 0;
    }
    cout<<steps[x]-1;
    return 0;
}