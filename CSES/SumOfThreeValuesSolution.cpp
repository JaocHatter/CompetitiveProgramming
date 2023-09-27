#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    int n;
    cin>>n;
    ll x;
    pair<ll,int> nums[n];
    cin>>x;
    forn(i,n){
        cin>>nums[i].first;
        nums[i].second=i+1;
    }   
    //Algorithm
    //reduce the range and apply binary search 
    sort(nums,nums+n);
    int i=0,j=n-1;
    for(i=0;i<n-1;i++){
        int j=i+1,k=n-1;
        ll target=x-nums[i].first;  
        ll sum=0;
        while(j!=k){
            sum=nums[j].first+nums[k].first;
            if(target==sum){
                cout<<nums[i].second<<" "<<nums[j].second<<" "<<nums[k].second;
                return 0;
            }
            else if(sum>target) k--;
            else j++;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}