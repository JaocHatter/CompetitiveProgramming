#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        k=floor((k-2)/2);
        cout<<k*(k+1)/2<<endl;
    }
    return 0;
}