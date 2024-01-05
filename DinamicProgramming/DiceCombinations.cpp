#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1000000007;
int main(){
    int n;
    scanf("%d",&n);
    int dice[] = {1,2,3,4,5,6};
    ll ways[n+1] = {};
    ways[0] = 1;
    for(int i = 1; i <= n ; i++){
        for(int j = 0; j < 6 ;j++){
            if( i - dice[j] >= 0){
                ways[i] += ways[i - dice[j]];
                ways[i]%=MOD;}
            else break;
        }
    }
    cout<<ways[n]%MOD;
    return 0;
}