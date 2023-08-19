#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int main(){
    int t,l;
    cin>>t;
    while(t--){
        string str;
        stack<char> ver;
        cin>>str;
        l=str.length();
        /*for(char x:str){
            if(ver.empty() || ver.top()==x){
                ver.push(x);
            } 
            else if(ver.top()=='(' && x==')'){
                ver.pop();
            }
        }
        if(ver.empty()){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;*/
        //construction
        // )( ->(()) , (( -> ()(),)) -> ()()
        string rpt1="",rpt2a="",rpt2b="",rpt2;
        for(int i=0;i<l;i+=1){
            rpt1+="()";
            rpt2a+="(";
            rpt2b+=")";
        }
        rpt2=rpt2a+rpt2b;
        if(rpt1.find(str) == string::npos){
            cout<<"YES\n";
            cout<<rpt1<<endl;
        }else if(rpt2.find(str)==string::npos){
            cout<<"YES\n";
            cout<<rpt2<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}