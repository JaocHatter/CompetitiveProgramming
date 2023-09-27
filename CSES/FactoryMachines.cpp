#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
//strategy:
/*
Busqueda Binaria
*/
const long long int maxi = 1e18;
ll solve(ll arr[],int l,ll k,ll t){
    ll sum=0;
    forn(i,l){
        sum+=k/arr[i];
        if (sum>t){
			break;
		}
    }
    return sum;
}
int main(){
    int n;
    ll t;
    cin>>n>>t;
    ll nums[n];
    forn(i,n){
        cin>>nums[i];
    }
    ll low=0,up=maxi,lim;
    while(low<=up){
        ll mid=(low+up)/2;
        ll x=solve(nums,n,mid,t);
        if(x>t){
            lim=mid;
            up=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<lim;
    return 0;
}