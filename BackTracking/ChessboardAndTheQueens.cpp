#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
int nways=0;
vector<pair<int,int>> ban;
/*

my exploring method be like...

\       
  \      
    \   
      \  
--------|
       /
      / 
     /  
    /   
   /   

*/
bool verify(int board[][8],int row,int col){
    //exploring my column
    for(int i=0;i<8;i++){
        if(board[row][i]) return 0;
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]) return 0;
    }
    for(int i=row,j=col;i<8 && j>=0;i++,j--){
        if(board[i][j]) return 0;
    }
    //if there no queens sharing squares
    return 1;
}
void solve(int board[][8],int col){
    if(col==8){
        forn(i,ban.size()){
            if(board[ban[i].first][ban[i].second]) return;
        }
        nways++;
        return;
    }
    forn(i,8){
        if(verify(board,i,col)){
            board[i][col]=1;
            solve(board,col+1);
            board[i][col]=0;
        }
    }
}
int main(){
    string input;
    int board[8][8];
    forn(i,8){
        cin>>input;
        forn(j,8){
            if(input[j]=='*') ban.pb({i,j});
            board[i][j]=0;
        }
    }
    solve(board,0);
    cout<<nways;
    return 0;
}