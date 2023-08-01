#include <bits/stdc++.h>
using namespace std;
#define l 1000001
#define forn(i,n) for(int i=0;i<n;i++)
bool criba[l];
int main(){
    //erathostenes algorithm
    criba[0]=criba[1]=true;
    for(int i=2;i*i<l;i++){
        if(!criba[i]){
            for(int j=i*i;j<l;j+=i){
                criba[j]=true;
            }
        }
    }
    int n,m=1;
    cin>>n;
    while(!criba[n*m+1]){
        m++;
    }
    cout<<m;
    return 0;
}