#include <iostream>
#include <algorithm>
#include <numeric>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
ll Euclid(ll a, ll b) {
    return !a ? b : Euclid(b % a, a);
}
int main(){
    int n,temp;
    ll gcd;
    cin>>n;
    long long nums[n][3];
    cin>>nums[0][0];
    gcd=nums[0][0];
    for(int i=1;i<n;i++){
        cin>>nums[i][0];
        nums[i][1]=Euclid(gcd,nums[i-1][0]);
        gcd=nums[i][1];
    }
    gcd=nums[n-1][0];
    for(int i=n-2;i>=0;i--){
        nums[i][2]=Euclid(gcd,nums[i+1][0]);
        gcd=nums[i][2];
    }
    nums[0][1]=nums[0][2];
    nums[n-1][2]=nums[n-1][1];
    //iterate
    long long rpt=Euclid(nums[0][1],nums[0][2]);
    for(int i=1;i<n;i++){
        rpt=max(rpt,Euclid(nums[i][1],nums[i][2]));
    }
    cout<<rpt;
    return 0;
}
