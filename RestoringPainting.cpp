#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,a,b,c,d;
    ll cont=0;
    cin>>n>>a>>b>>c>>d;
    for(int i=1;i<=n;i++){
        if(i+a-d>=1 && i+a-d<=n && i+a+b-c-d>=1 && i+a+b-c-d<=n && i+b-c>=1 && i+b-c<=n) cont++;
    }
    cout<<cont*n;
    return 0;
}