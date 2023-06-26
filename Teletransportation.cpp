#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
struct portal{
    int x1,y1,x2,y2;
};
int distancia=0;
void solve(vector<portal> xd,int x,int y){
    if(xd.size()==0){
        return;
    }
    int distance=0,opt=100000,dx=100000,dy=100000,idx,mx,my;
    forn(i,xd.size()){
        if(opt>=abs(xd[i].x1-x)+abs(xd[i].y1-y)){
            opt=abs(xd[i].x1-x)+abs(xd[i].y1-y);
            if(dx>=xd[i].x1){
                dx=xd[i].x1;
                mx=abs(xd[i].x1-x);
                if(dx==xd[i].x1){
                    if(dy>xd[i].y1){
                    dy=xd[i].y1;
                    my=abs(xd[i].y1-y);
                    idx=i;
                    continue;
                    }
                }
                else{
                    dy=xd[i].y1;
                    my=abs(xd[i].y1-y);
                    idx=i;
                    continue;
                }
            }
        }
    }
    x=xd[idx].x2;
    y=xd[idx].y2;
    distancia+=mx+my;
    xd.erase(xd.begin()+idx);
    solve(xd,x,y);
}
int main(){
    int n,x,y,p1,p2,portals;
    cin>>n;
    vector<portal> xd;
    forn(i,n){
        cin>>x>>y;
        cin>>p1>>p2;
        cin>>portals;
        xd.resize(portals);
        forn(j,portals){
            cin>>xd[j].x1>>xd[j].y1>>xd[j].x2>>xd[j].y2;
        }
        solve(xd,p1,p2);
        cout<<"Case #"<<i+1<<": "<<distancia<<endl;
    }
    return 0;
}