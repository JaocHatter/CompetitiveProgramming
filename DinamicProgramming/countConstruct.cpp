#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll> memo;
ll build(string target,vector<string> word){
    if(memo.count(target)==1) return memo[target]; 
    if(target=="") return 1;
    ll num=0;
    for(string w: word){
        int l=w.length();
        if(w==target.substr(0,l)){
            num+=build(target.substr(w.length(),target.length()-l+1),word);
        }
    }
    memo[target]=num; 
    return num;
}
int main(){
    string example1="purple",example3="abcdef",example2="eeeeeeeeeeeeeeeeeeeeeeeeeeef";
    vector<string> e1={"purp","p","ur","le","purpl"},e3={"ab","abc","cd","def","abcd"},e2={"ee","eee","eeeeeeeee","f"};
    cout<<build(example1,e1)<<endl;
    cout<<build(example2,e2)<<endl;
    cout<<build(example3,e3);
    return 0;
}