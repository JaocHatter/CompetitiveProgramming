#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        ll num;
        cin>>num; 
        if(num%2==1){
            int a=0,b=0;
            bool det=false;
            string str=to_string(num),r1="",r2="";
            for(int i=0;i<str.length();i++){
                int k=(str[i]-'0');
                if(k%2==0){
                    string x=to_string(k/2);
                    r1+=x;
                    r2+=x;
                    continue;
                }
                a=k/2; //(n-1)/2
                b=k-a; //(n+1)/2
                if(det){
                    r1+=to_string(b);
                    r2+=to_string(a);
                }else{
                    r1+=to_string(a);
                    r2+=to_string(b);
                }
                det=(!det);
            }
            cout<<stoll(r1)<<" "<<stoll(r2)<<endl;
        }else{
            cout<<num/2<<" "<<num/2<<endl;
        }
    }
    return 0;
}