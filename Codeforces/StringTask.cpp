#include <bits/stdc++.h>
#include <cctype>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define ll long long
bool vowel(char x){
    x=tolower(x);
    if(x=='a'|| x=='e'|| x=='i' || x=='o' || x=='u' || x =='y'){
        return true;
    }
    return false;
}
int main(){
    string str,rpt="";
    cin>>str;
    forn(idx,str.length()){
        char p=tolower(str[idx]);
        if(!vowel(p)){
            rpt+="."+string(1,p);
        }
    }
    cout<<rpt;
    return 0; 
}