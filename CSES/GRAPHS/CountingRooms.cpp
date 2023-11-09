#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int rooms=0,n,m;
void moving_on(vector<string> &t,int x,int y){
    t[x][y]='#';
    for(int j=-1;j<=1;j+=2){
        if( y+j<0 || y+j>=m) continue;
        if(t[x][y+j] != '#'){
            moving_on(t,x,y+j);
        }
    }
    for(int j=-1;j<=1;j+=2){
        if( x+j<0 || x+j>=n) continue;
        if(t[x+j][y] != '#'){
            moving_on(t,x+j,y);
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    vector<string> table(n);
    forn(i,n){
        cin>>table[i];
    }
    forn(i,n){
        forn(j,m){
            if(table[i][j]=='.'){
                moving_on(table,i,j);
                rooms++;
            }
        }
    }
    cout<<rooms;
    return 0;
}