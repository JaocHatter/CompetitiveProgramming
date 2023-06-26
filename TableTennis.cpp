#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,aux,winner=0;
    cin>>n;
    ll k,cont=0; cin>>k; vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>aux;
        nums.push_back(aux);
        if(i==0){
            winner=aux;
            continue;
        }
        if(winner>aux){
            cont++; 
            if(cont==k) break;
        }else{
            winner=aux;
            cont=1;
        } 
    }
    cout<<winner;
    return 0;
}   