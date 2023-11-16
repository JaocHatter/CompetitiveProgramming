#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define ll long long

int main(){
    int k;
    string num;
    ll suma;
    cin>>num;
    cin>>k;
    while(true){
        suma = 0;
        for(char x: num){
            suma+=(int)(x-'0');
        }
        num = to_string(suma);
        if(suma<10) break;
    }
    suma *= k;
    num = to_string(suma);
    while(true){
        suma = 0;
        for(char x: num){
            suma+=(int)(x-'0');
        }
        num = to_string(suma);
        if(suma<10) break;
    }
    cout<<suma;
    return 0;
}