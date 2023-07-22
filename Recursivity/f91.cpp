#include <bits/stdc++.h>
using namespace std;
/*int f91(int n){
    if(n<=100) f91(f91(n+11));
    else if(n>100) return n-10;
}*/
int main(){
    int n;
    cin>>n;
    if(n<101) cout<<91;
    else cout<<n-10;
    return 0;
}