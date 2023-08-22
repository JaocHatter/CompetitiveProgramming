#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int binarySearch(const long long arr[],int left,int right,int size, long long target) {
    int mid = left + (right - left) / 2;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Return the index where the element was found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    //if(mid==0 && arr[mid]!=target) return -1;
    if(mid==size-1 && arr[mid]>target) return mid+1;
    return mid; // Return -1 if the element was not found
}
int main(){
    int t;
    ll rpt;
    cin>>t; 
    while(t--){
        rpt=0;
        int p,q,r;
        cin>>p;
        ll f[p];
        forn(i,p) cin>>f[i];
        cin>>q;
        ll s[q];
        forn(j,q) cin>>s[j];
        cin>>r;
        ll t[r];
        forn(k,r) cin>>t[k];
        vector<vector<ll>> temp;
        forn(i,q){
            if(i>=r){
                break;
            }
            int idx=binarySearch(t,i,r-1,r,s[i]);
            cout<<idx<<endl;
            if(idx==r){
                break;
            }
            if(s[i]<=t[idx] && i<=idx){
                temp.pb({s[i],r-idx,i});
            }
        }
        //debug
        for(vector<ll> x: temp){
            cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
        }
        //now, count how many numbers in P are less or equal than Q[j]
        forn(i,temp.size()){
            int idx=binarySearch(f,0,p-1,p,temp[i][0]);
            if(f[idx]==temp[i][0] && idx<=temp[i][2]){
                rpt+=idx*1ll*temp[i][1];
            }else if(f[idx]>temp[i][0]){
                if(idx==0) continue;
                else if(idx-1<=temp[i][2]){
                    rpt+=(idx-1)*1ll*temp[i][1];
                }
            }
        }
        cout<<rpt<<endl;
    }
    return 0;
}