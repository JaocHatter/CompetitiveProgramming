#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define ll long long
using namespace std;
int main(){
    int n,k,x; 
    cin>>n>>k>>x; 
    ll a=0,b=1,exp=1;
    for(int i=1;i<=n-2;i++){
        exp*=(k-1);
        exp%=MOD;
        a=b;
        b=(exp-a+MOD)%MOD;
    }
    cout<<b;
    return 0;
}