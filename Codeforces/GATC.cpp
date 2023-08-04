#include <bits/stdc++.h>
using namespace std;
/*  b=s.substr(i,j-i);
    c=s.substr(j,l-j);  */
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        if(l<3){
            cout<<":("<<endl;
            continue;
        }
        if(s[0]=='a' && s[l-1]=='a'){
            cout<<"a "<<s.substr(1,l-2)<<" a"<<endl; 
        }else if(s[0]=='a' && s[l-1]=='b'){
            if(s[1]=='a'){
                cout<<s.substr(0,l-2)<<" "<<s[l-2]<<" b"<<endl;
            }else{
                cout<<"a "<<s.substr(1,l-2)<<" b"<<endl;
            }
        }else if(s[0]=='b' && s[l-1]=='a'){
            if(s[1]=='b'){
                cout<<"b "<<s.substr(1,l-2)<<" a"<<endl;
            }else{
                cout<<"b a "<<s.substr(2,l-2)<<endl;
            }
        }else if(s[0]=='b' && s[l-1]=='b'){
            cout<<"b "<<s.substr(1,l-2)<<" b"<<endl; 
        }
    }
    return 0;
}