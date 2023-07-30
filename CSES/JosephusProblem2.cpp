#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    int n,r,it=1;
    cin>>n>>r;
    if(n==1){
        cout<<1;
        return 0;
    }
    vector<int> arr;
    forn(i,n) arr.pb(i+1);
    while(n--){
        cout<<arr[it]<<" ";
        arr.pb(arr[it-1]);
        it+=2;
        if(n==1){
            cout<<*(arr.rbegin());
            break;
        }
    }
    return 0; 
}