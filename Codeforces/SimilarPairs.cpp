#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int t,n,in;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],odd=0,even=0;
        forn(i,n){
            cin>>arr[i];
            arr[i]%2==0? even++:odd++;
        }
        sort(arr,arr+n);
        if(even%2!=odd%2) cout<<"NO"<<endl;
        else{
            if(odd%2==0) cout<<"YES"<<endl;
            else{
                bool det=true;
                for(int i=1;i<n;i++){
                    if(arr[i]-arr[i-1]==1){
                        cout<<"YES"<<endl;
                        det=false;
                        break;
                    }
                }
                if(det) cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}