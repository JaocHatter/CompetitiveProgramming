#include <bits/stdc++.h>
using namespace std; 
int main(){
    set<int> xd;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        xd.insert(k);
    }
    cout<<xd.size();
    return 0; 
}
