#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i,it, n) for(int i = it; i < n; i++)
int particion(vector<int> arr,int ini,int fin){
    ll pivote=arr[fin];
    int key=ini;
    for(int i=ini;i<fin;i++){
        if(arr[i]<pivote){
            swap(arr[i],arr[key]);
            key++;
        }
    }
    swap(arr[fin],arr[key]);
    return key;
}
void quicksort(vector<int> arr,int ini,int fin){
    if(ini<fin){
        int pivote=particion(arr,ini,fin);
        quicksort(arr,ini,pivote-1);
        quicksort(arr,pivote+1,fin);
    }
}
int main(){
    int n;
    cin>>n;
    int num;
    vector<int> arr;
    for(long i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    quicksort(arr,0,n-1);
    forn(i,0,n){
        cout<<arr[i]<<" ";
    }
    return 0;
}