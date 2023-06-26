#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; string bl; cin>>t;
    while(t--){
        map<char,int> xd; cin>>bl; int det=-1;
        for(int i=0;i<bl.length();i++){
            if(xd.count(bl[i])==0) xd[bl[i]]=1;
            else xd[bl[i]]++;
            det=max(xd[bl[i]],det);
        }
        if(det<=2) cout<<4<<"\n";
        else if(det==3) cout<<6<<"\n";
        else cout<<-1<<"\n";
    }
}