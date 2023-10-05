#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define MAX 100001
#define ll long long
using namespace std; 
int arr[MAX];
int main(){
    for(int i=0;i<=100;i++){
        arr[i]= i%2==0? i+2:i;
    }
    int t,n;
    cin>>t;
    forn(i,t){
        int aux;
        cin>>n;
        //algorithm
        if(n%2==1){
            if(n==1){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}