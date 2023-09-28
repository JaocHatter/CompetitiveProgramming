#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
int main(){
    int n,a,b;
    cin>>n;
    pair<int,int> nums[n];
    forn(i,n){
        cin>>a>>b;
        nums[i]={a,b};
    }
    //why must sort?
    //imagine that you start by the tupple that have the max first element
    // 3 
    // after that, you must sum the second max
    // 3 + 2
    // and the last one
    // 3 + 2 + 1
    //You will get... the max sum, but in this problem, we must minimize this sum...
    sort(nums,nums+n);
    ll sum=0,rpt=0;
    forn(i,n){
        sum+=nums[i].first;
        rpt+=nums[i].second-sum;
    } 
    cout<<rpt; 
    return 0;
}