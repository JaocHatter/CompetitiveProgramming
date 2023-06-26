#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n,cuenta=0;
    ll num;
    cin>>n;
    //la llave es la base y el valor es la cima!
    multiset<int> torres;
    for(int i=0;i<n;i++){
        cin>>num;
        auto it=torres.upper_bound(num);
        if(it==torres.end()){
            torres.insert(num);
            cuenta++;
        }
        else{
            torres.erase(it);
            torres.insert(num);
        }
    }
    cout<<cuenta;
    return 0;
}