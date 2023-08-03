#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ll long long
using namespace std;
int sudoku[9][9];
bool verify(int x,int row,int col){
    for(int i=0;i<9;i++) if(sudoku[row][i]==x) return 0;
    return 1;
}
void print(){
    forn(i,9){
        forn(j,9){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
void solve(int x,int col){
    if(x==10){
        cout<<endl;
        print();
        cout<<endl;
        return;
    }
    if(col==9){
        solve(x+1,0);
    }
    forn(i,9){
        if(sudoku[i][col]==0){
            if(verify(x,i,col)){
                sudoku[i][col]=x;
                solve(x,col+1);
                sudoku[i][col]=0;
            }
        }
    }
}
int main(){
    //filling
    forn(i,9){
        forn(j,9){
            sudoku[i][j]=0;
        }
    }
    solve(1,0);
    return 0;
}