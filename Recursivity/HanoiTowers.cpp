#include <bits/stdc++.h>
using namespace std;
    char X,Y,Z;
void hanoi(int n,char A,char C,char B){    
    if(n==1){
        cout<<"Move from " + string(1,A) +" to "+ string(1,C)+"."<<endl; 
        return;
    }
    hanoi(n-1,A,B,C);
    cout<<"Move from "+ string(1,A) +" to "+string(1,C)+"."<<endl;
    hanoi(n-1,B,C,A);
}
int main(){
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        cin>>X>>Y; 
        if((X-'A')+(Y-'A')==1) Z='C';
        else if((X-'A')+(Y-'A')==3) Z='A';
        else Z='B';
        hanoi(k,X,Y,Z);
        cout<<"Done!"<<endl;
    }
    return 0;
}