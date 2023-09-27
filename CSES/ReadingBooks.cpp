#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    int n;
    cin>>n;
    ll num[n];
    ll total=0,maxi=0;
    forn(i,n){
        cin>>num[i];
        total+=num[i];
        maxi=max(maxi,num[i]); 
    }
    if(maxi>=total-maxi){
        cout<<2*1ll*maxi;
    }else{
        cout<<total;
    }
    return 0;
}