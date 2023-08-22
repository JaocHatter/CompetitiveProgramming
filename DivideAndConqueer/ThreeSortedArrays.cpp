#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int binarySearch(const long long arr[],int left,int right,long long target,bool mod) {
    int mid=left+(right-left)/2;
    while (left<=right) {
        mid=left+(right-left)/2;
        if(arr[mid] == target) {
            return mid; // Return the index where the element was found
        }else if(arr[mid]<target) {
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    //esto es una especie de upperbound y lowerbound dependiendo el valor de mod
    if(mod){
        if(target>arr[mid]) return mid+1; //first element greater than target
        else return mid;
    }else{
        if(target>arr[mid]) return mid; //first element less than target
        else return mid-1;
    }
    return mid;
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
        //creo una matriz temporal que me ayude a guardar
        /*
        -el numero del array Q
        -cuantos R[k] son mayores a Q[j]
        -indice
        */
        vector<vector<ll>> temp;
        forn(i,q){
            if(i>=r){
                break; //
            }
            int idx=binarySearch(t,i,r-1,s[i],1);
            if(idx==r){
                break;
            }
            if(s[i]<=t[idx] && i<=idx){
                temp.pb({s[i],r-idx,i});
            }
        }
        //debug
        /*for(vector<ll> x: temp){
            cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
        }*/
        //now, count how many numbers in P are less or equal than TEMP[j]
        forn(i,temp.size()){
            int idx=binarySearch(f,0,temp[i][2],temp[i][0],0);
            if(idx<=temp[i][2] && f[idx]<=temp[i][0]){
                rpt+=(idx+1)*1ll*temp[i][1];
            }
        }
        cout<<rpt<<endl;
    }
    return 0;
}