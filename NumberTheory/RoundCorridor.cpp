#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int main(){
    ll n,m,mcd;
    int q;
    cin>>n>>m>>q;
    mcd=__gcd(n,m);
    ll arr[2]; 
    arr[0]=n/mcd;
    arr[1]=m/mcd;
    while(q--){
        int sx,ex;
        ll sy,ey; 
        cin>>sx>>sy>>ex>>ey;
        if(mcd==1) cout<<"YES"<<endl;
        ll pos1=sy/arr[sx-1],pos2=ey/arr[ex-1];
        if(sy%arr[sx-1]!=0) pos1++;
        if(ey%arr[ex-1]!=0) pos2++;
        if(pos1==pos2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}