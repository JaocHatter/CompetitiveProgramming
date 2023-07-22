#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll k;
ll winner(ll n,ll rpt,bool d,ll it){
    if(n/2==1) return rpt;
    if(n%2==0){
        if(d){
            winner(n/2,rpt,(n/2)%2==0? true:false,it);
        }
        else{
            winner(n/2,(rpt+it)%(k+1),((n+1)/2)%2==0? false:true,it*2);
        }
    }else{
        if(d) winner(n/2,rpt,(n/2)%2==0? true:false,it);
        else winner((n+1)/2,(rpt+it)%(k+1),((n+1)/2)%2==0? false:true,it*2);
    }
}
int main(){
    ll num;
    cin>>num;
    k=num;
    bool det=num%2==0? true:false;
    cout<<winner(num,1,det,2);
} 
