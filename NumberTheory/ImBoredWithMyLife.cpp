#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll a,b,fact=1;
    cin>>a>>b;
    if(min(a,b)==1){
        cout<<1;
        return 0;
    }
    for(int i=1;i<=min(a,b);i++){
        fact*=i;
    }
    cout<<fact;
    return 0;
}