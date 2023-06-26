#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define forn(i,k,n) for(int i=k;i<n;i++)
int main(){
    ll n,aux=0,minaux,maxaux,rpt;
    cin>>n;
    vector<ll> nums(n),sums(n,0);     
    forn(i,0,n) cin>>nums[i];
    //algorithm
    sums[0]=nums[0];
    minaux=sums[0];
    maxaux=sums[0];
    forn(j,1,n){
        sums[j]+=sums[j-1]+nums[j];
        
    }
    cout<<rpt;
    return 0;
}