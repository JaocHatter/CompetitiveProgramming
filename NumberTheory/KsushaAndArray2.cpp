#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int n;
    ll rpt=INT_MAX;
    cin>>n;
    ll arr[n];
    forn(i,n){
        cin>>arr[i];
        rpt=min(rpt,arr[i]);
        if(rpt==1){
            cout<<1;
            return 0;
        }
    }
    forn(i,n){
        if(arr[i]%rpt!=0){
            cout<<-1;
            return 0;
        }
    }
    cout<<rpt;
}