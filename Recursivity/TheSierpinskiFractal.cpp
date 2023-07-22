#include <bits/stdc++.h>
using namespace std;
char tab[2048][2048]; //El obetivo es que cuando la recursion
//llegue a su limite, este imprima el triangulin -->
//            /\     */
//           /__\   */ 
void trgl(int i,int j,int it){
    if(it==0){
        tab[i][j]='/';
        tab[i][j+1]='_';
        tab[i][j+2]='_';
        tab[i][j+3]='\\';
        tab[i-1][j+1]='/';
        tab[i-1][j+2]='\\';
        return;
    }
    //
    trgl(i,j,it-1); //iterador, tambien
    trgl(i,j+pow(2,it+1),it-1); //en la base puede apreciar como irá avanzando de 4 en 4, luego de 8 en 8
    trgl(i-pow(2,it),j+pow(2,it),it-1);
}
void resetear(){
    for(int i=0;i<2048;i++){
        fill(tab[i],tab[i]+2048,' ');
    }
}
int main(){
    int n,num,fila;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++) cin>>x[i];
    resetear();
    for(int i=0;i<n;i++){
        fila=pow(2,x[i]+1);
        trgl(fila-1,0,x[i]);
        for(int l=0;l<fila;l++){
            for(int j=0;j<pow(2,x[i]+2);j++) cout<<tab[l][j];
            if(l!=fila-1) cout<<endl;
        }
        resetear();
        if(i<n-1) cout<<endl<<endl;
    }   
    return 0;
}