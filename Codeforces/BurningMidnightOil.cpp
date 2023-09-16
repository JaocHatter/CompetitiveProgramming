#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
ll suma(ll n,int k){
    ll acum=0;
    while(n!=0){
        acum+=n; 
        n/=k;
    }
    return acum;
}
int main(){
    ll n,temp;
    int k;
    cin>>n>>k;
    ll  l=0,h=1000000000LL,mid,acum;
    while(true){
        mid=(l+h)/2;
        acum=suma(mid,k);
        if(mid==h || mid==l){
            if(suma(mid,k)<n){
                mid++;
            }
            cout<<mid;
            break;
        }
        if(acum>n){
            h=mid;
        }else{
            l=mid;
        }
    }
} 
