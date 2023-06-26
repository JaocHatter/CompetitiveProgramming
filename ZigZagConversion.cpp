#include <bits/stdc++.h>
using namespace std;
int rows;
string word;
#define forn(i,n) for(int i=0;i<n;i++)
string solve(){
    string newstr="";
    vector<vector<char>> newword(rows,vector<char>(word.length()/2));
    forn(i,rows){
        fill(newword[i].begin(), newword[i].end(), ' ');
    }
    //algorithm
    int x=0,y=0;
    bool det=true;
    forn(i,word.length()){
        if(i%(rows-1)==0 and i!=0){
            det=det==true? false:true;
        }
        //down
        if(det){
            //cout<<x<<" "<<y<<endl;
        newword[x++][y]=word[i];}
        //diagonal 
        else{
            //cout<<x<<" "<<y<<endl;
            newword[x--][y++]=word[i];}
        }
    forn(i,rows){
        forn(j,y+1){
            if(newword[i][j]==' ') continue;
            newstr+=newword[i][j];
        }
    }
    return newstr;
}
int main(){
    cin>>word>>rows;
    cout<<solve();
    return 0;
}