#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll ten(ll n){
    if(n==0) return 0;
    return ten(n/10)+45*(n/10)+((n%10)*(n%10+1))/2;
}
int main(){
    ll p,q;
    while(1){
        cin>>p>>q;
        if(p<0 && q<0) break;
        cout<<ten(q)-ten(p-1)<<endl; 
    }
    return 0;
}