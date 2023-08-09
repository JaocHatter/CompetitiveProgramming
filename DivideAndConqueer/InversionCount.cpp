#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll inversion=0;
void merge(ll arr[],int ini,int mitad,int fin){
    ll left[mitad-ini+1],right[fin-mitad];
    for(int i=0;i<mitad-ini+1;i++) left[i]=arr[ini+i];
    for(int j=0;j<fin-mitad;j++) right[j]=arr[j+mitad+1];
    int i=0,j=0,k=ini;
    while(i<mitad-ini+1 && j<fin-mitad){
        if(left[i]>right[j]){
            arr[k]=right[j];
            inversion+=(mitad-ini-i+1); //the trick is know, that if A[i]>A[j] -> A[i],A[i+1],...,A[mid-ini] 
                                        //(mid-ini-i+1 terms are greater than A[j])
            j++;
        }else{
            arr[k]=left[i];
            i++;
        }
        k++;
    }
    //we gonna work in the surplus elements
    while(i<mitad-ini+1){
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j<fin-mitad){
        arr[k]=right[j];
        k++;
        j++;
    } 
}
void mergeSort(ll arr[],int ini,int fin){
    if(ini<fin){
        int mitad =ini+(fin-ini)/2;
        mergeSort(arr,ini,mitad);
        mergeSort(arr,mitad+1,fin);
        merge(arr,ini,mitad,fin); //last task for every recursion!
    }
}
int main(){
    int t,n;
    cin>>t;
    vector<ll> rptas;
    cout<<endl;
    while(t--){
        cin>>n;
        ll arr[n];
        forn(i,n) cin>>arr[i];
        //merge
        mergeSort(arr,0,n-1 );
        cout<<endl;
        rptas.push_back(inversion);
        inversion=0;
    }
    for(ll x: rptas) cout<<x<<endl;
    return 0;
}   
