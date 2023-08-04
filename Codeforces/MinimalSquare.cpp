#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll mini=min(a,b),maxi=max(a,b);
        if((2*mini)>maxi) cout<<4*mini*mini<<endl;
        else cout<<maxi*1ll*maxi<<endl;
        }
    return 0;
}