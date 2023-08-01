#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main(){
    int n;
    ll mcd=0,num,rpt=0;
    cin>>n;
    while(n--){
        cin>>num;
        mcd=__gcd(mcd,num);
    }
    if(mcd==1){
        cout<<1;
        return 0;
    }
    //we can transform 10**12 monster to 10**6 to make it easier
    for(int i=1;i*1ll*i<=mcd;i++){ 
        if(mcd%i==0){
            rpt+=2; // a * b = mcd  -> a and b are two
            if(i*1ll*i==mcd) rpt--; // a * a 
        }
    }
    cout<<rpt;
    return 0;
}