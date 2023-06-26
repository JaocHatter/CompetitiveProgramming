#include <bits/stdc++.h>
using namespace std;
string s="abcde";
vector<bool> registro(s.length(),0);
int cont=0;
void SubSets(string str,int p){
    for(int i=p;i<s.length();i++){
        if(!registro[i]){
            registro[i]=1;
            cout<<str+s[i]<<" "<<++cont<<endl;
            SubSets(str+s[i],i+1);
            registro[i]=0;
        }
    }
    return;
}
int main(){
    SubSets("",0);
    return 0;
}