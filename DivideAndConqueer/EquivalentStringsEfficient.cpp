#include <bits/stdc++.h>
using namespace std;
//the trick is sort lexicographically and compare a and b
string solve(string s){
    if(s.length()%2){
        return s;
    }else{
        string a=solve(s.substr(0,s.size()/2));
        string b=solve(s.substr(s.size()/2,s.size()/2));
        return min(a+b,b+a);
    }
}
int main(){
    string a,b;
    cin>>a>>b;
    if(solve(a)==solve(b)){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}