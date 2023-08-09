#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
int i;
void mergeSort(int ini,int fin,int depth){
    if(ini==i && fin==i){
        cout<<ini<<" "<<fin<<endl;
        cout<<depth+1<<endl;
        return;
    }
    if(ini<fin){
        cout<<ini<<" "<<fin<<endl;
        int mitad =(ini+fin)/2;
        if(i<=mitad) mergeSort(ini,mitad,depth+1);
        else if(i>=mitad+1) mergeSort(mitad+1,fin,depth+1);
    }
}
int main(){
    int T,s,t;
    cin>>T;
    while(T--){
        cin>>s>>t>>i;
        if(i<s || i>t) cout<<-1<<endl;
        else mergeSort(s,t,0);
    }
    return 0;   
}