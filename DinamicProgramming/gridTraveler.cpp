#include <bits/stdc++.h>
#define len 1000
#define ll long long
using namespace std;
ll table[len][len];
ll gridways(int x,int y){
    if(table[x][y]!=-1) return table[x][y];
    if(x==1 and y==1) return 1;
    if(x==0 or y==0) return 0;

    table[x][y]=gridways(x-1,y)+gridways(x,y-1);
    return table[x][y];
}
int main(){
    int x,y;
    cin>>x>>y;
    memset(table,-1,sizeof(table));
    cout<<gridways(x,y);
    return 0;
}