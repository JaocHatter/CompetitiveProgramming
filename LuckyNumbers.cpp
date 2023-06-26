#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
using ll=long long;
int main(){
    int n,num1,num2,maxi=10,mini=0,aux,maximo,aux2;
    cin>>n;
    forn(i,n){
        cin>>num1>>num2;
        maximo=0;
        for(int j=num2;j>=num1;j--){
            maxi=0;
            mini=10;
            aux2=j;
            while(aux2!=0){
                maxi=max(maxi,aux2%10);
                mini=min(mini,aux2%10);
                aux2=aux2/10;
            }
            if(maxi-mini>=maximo){
                maximo=maxi-mini;
                aux=j;
            }
            if(maxi-mini==9){
                aux=j;
                break;
            }
        }
        cout<<aux<<endl;
    }
    //Juro que continuare contigo!
    return 0;
}