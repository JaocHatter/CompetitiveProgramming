#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define limit 1000000
bool nums[limit+1];
int main(){
    // criba
    fill(nums,nums+limit,0);
    nums[1]=false;
    for(int i=2;i<=1001;i++){
            ll aux=i*i,sum=1+i,it=0;
            while(1){
                sum+=aux;
                aux*=i;
                if(sum>=limit) break;
                nums[sum]=1;
            }
        }
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>=limit){
            cout<<"NO"<<endl;
            continue;
            }
        string rpt=nums[n]==1? "YES":"NO";
        cout<<rpt<<endl;
    }
    return 0; 
}