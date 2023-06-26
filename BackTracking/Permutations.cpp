#include <bits/stdc++.h>
using namespace std;
string s="abcdef";
int pos=0;
vector<bool> registro(s.length(),0);
void permutation(string str,int l){
    if(l==s.length()){
         cout<<str<<" "<<++pos<<endl;
         return;
    }
    for(int i=0;i<s.length();i++){
        if(!registro[i]){
            registro[i]=true;
            permutation(str+s[i],l+1);
            registro[i]=false;
        }
    }
}
int main(){
    int l=s.length();
    permutation("",0);
    return 0;
}