#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define fo(i,n) for(int i=0;i<n;i++)
vector<ll> xd(1000000000,0);
int main(){
    int n;
    ll num;
    cin>>n;
    fo(i,n){
        cin>>num;
        xd[num-1]=abs(i-xd[num-1]);
    }
    return 0;
}