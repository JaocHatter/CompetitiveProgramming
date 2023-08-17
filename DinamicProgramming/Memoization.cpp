#include <bits/stdc++.h>
using namespace std;
int memoization[1000];
int fibonacci(int n){
    if(memoization[n]!=-1) return memoization[n];
    if(n<=1) return 1;
    int result=fibonacci(n-1)+fibonacci(n-2);
    memoization[n]=result;
    return result;
}
int main(){
    int n;
    cin>>n;
    fill(memoization,memoization+1000,-1);
    memoization[0]=memoization[1]=1;
    int rpt=fibonacci(n);
    for(int i=0;i<n;i++) cout<<*(memoization+i)<<" ";
    return 0;
}