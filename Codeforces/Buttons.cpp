#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        int remaining;
        cin>>a>>b>>c;
        string rpt="First";
        if(c%2==0){
            rpt="Second";
            if(a>b) rpt="First";
        }else{
            if(a<b) rpt="Second";
        }
        cout<<rpt<<endl;
    }
}