#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int main(){ 
    int n;
    cin>>n;
    ll a,b;
    multiset<vector<ll>> customers;
    int arr[n];
    forn(i,n){
        cin>>a>>b;
        customers.insert({a,b,i});
    }
    int idx=1;
    auto it=customers.begin();
    while(!customers.empty()){
        if(it==customers.end()){
            idx++;
            it=customers.begin();
            continue;
        }
        arr[(*it)[2]]=idx;
        ll next_target=(*it)[1];
        customers.erase({(*it)[0],(*it)[1],(*it)[2]});
        it=customers.lower_bound({next_target+1,0,-1});
    }
    cout<<idx<<endl;
    forn(i,n) cout<<arr[i]<<" ";
    return 0;
}