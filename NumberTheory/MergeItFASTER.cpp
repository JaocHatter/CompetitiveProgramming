#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int main(){
    int q,n,ins;
    cin>>q;
    while(q--){
        int rpt=0,t=0,o=0;
        cin>>n;
        stack<int> ones,twos;
        forn(i,n){
            cin>>ins;
            ins=ins%3;
            if(ins==0) rpt++;
            else if(ins%3==2){
                twos.push(ins%3);
                t++; 
            }
            else{
                ones.push(ins);
                o++;
            }
        }
        //start killing minnories
        while(!ones.empty() && !twos.empty()){
            twos.pop();
            ones.pop();
            t--;
            o--;
            rpt++;
        }
        if(ones.empty()) rpt+=t/3;
        else rpt+=o/3;
        cout<<rpt<<endl;
    }
    return 0;
}