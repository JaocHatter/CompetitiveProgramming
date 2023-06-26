#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,num;
    cin>>n>>x;
    if(n==1){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    map<int,int> dat;
    for(int i=1;i<=n;i++){
        cin>>num;
        dat[num]=i;
    }
    for(auto it=dat.begin();it!=dat.end();it++){
        auto k=dat.find(x-(it->first));
        if(k!=dat.end()){
            if(k==it and it->second!=1){
                cout<<it->second<<" "<<(k->second)-1;
            }
            else if(k==it and it->second==1){
                cout<<"IMPOSSIBLE";
            }
            else{
                cout<<it->second<<" "<<k->second;
            }
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}