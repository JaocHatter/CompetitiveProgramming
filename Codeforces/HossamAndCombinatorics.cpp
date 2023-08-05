#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define MAX 100001
#define ll long long
using namespace std; 
int arr[MAX];
int main(){
    int t,n;
    cin>>t;
    while(t--){
        fill(arr,arr+MAX,0);
        int num;
        cin>>n;
        int maxi=0,mini=MAX;
        forn(i,n){
            cin>>num;
            arr[num]++;
            mini=min(mini,num);
            maxi=max(maxi,num);
        }
        if(mini==maxi){
            int k=arr[mini];
            ll rpt=k*1ll*(k-1);
            cout<<rpt<<endl;
        }else{
        ll rpt=arr[mini]*1ll*arr[maxi];
            cout<<2*rpt<<endl;
        }
    }
    return 0;
}