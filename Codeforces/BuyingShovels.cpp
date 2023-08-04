#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
//long long num = 1e9;
int main(){
    int t; 
    cin>>t; 
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<endl;
            continue;
        }
        bool primo=true;
        ll temp,rpt=n;
        for(ll i=2;i*1ll*i<=n;i++){
            if(n%i==0 && i<=k){
                temp=n/i;
                if(n/i<=k && i<=k){
                    temp=min(n/i,i);
                }
                rpt=min(rpt,temp);
                primo=false;
            }   
        }
        if(primo) cout<<n<<endl;
        else cout<<rpt<<endl;
    }
    return 0;
}