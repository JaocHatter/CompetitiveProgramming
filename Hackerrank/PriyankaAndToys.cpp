#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    forn(i,n){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int low=arr[0]+4,cnt=1;
    forn(i,n){
        if(arr[i]>low){
            cnt++;
            low=arr[i]+4;
        }
    }
    cout<<cnt;
    return 0;
}