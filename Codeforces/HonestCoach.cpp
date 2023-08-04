#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int rpt=1000;
        vector<int> ath;
        while(n--){
            cin>>a;
            ath.pb(a);
        }
        sort(ath.begin(),ath.end());
        for(int i=1;i<ath.size();i++){
            rpt=min(ath[i]-ath[i-1],rpt); 
        }
        cout<<rpt<<endl;
    }
    return 0;
}