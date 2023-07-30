#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    int q; 
    cin>>q;
    vector<ll> powers(19);
    string xd="";
    powers[0]=1;
    for(int i=1;i<19;i++){
        powers[i]=powers[i-1]*10;
    }
    while(q--){
        ll k,lim=0,aux=0,x;
        cin>>k;
        for(int i=1;;i++){
            aux=(powers[i]-powers[i-1])*i;
            if(aux<=k){
                lim+=aux;
            }else{
                x=lim; //sum of all numbers from behind
                lim=i-1;
                break;
            }
        }
        //binary search
        k=k-x;
        ll u=powers[lim+1]-1,d=powers[lim];
        while(u!=d){
            if((u+d)/2==d) break;
            if(k>((u+d)/2-powers[lim]+1)*(lim+1)){
                d=(u+d)/2;
            }
            else{
                u=(u+d)/2;
            }
        }
        //im gonna use "u" to save memory
        u=(d-powers[lim]+1)*(lim+1);
        if(u<k){
            cout<<d+1<<" "<<k-u-1<<endl;
            xd+=to_string(d+1)[k-u-1];
        }else{
            cout<<d<<" "<<u-k-1<<endl;
            xd+=to_string(d)[u-k]; 
        }
    }
    for(char x:xd) cout<<x<<endl;
    return 0;
}