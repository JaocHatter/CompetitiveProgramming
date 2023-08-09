#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void merge(int arr[],int ini,int mitad,int fin){
    int left[mitad-ini+1],right[fin-mitad];
    for(int i=0;i<mitad-ini+1;i++) left[i]=arr[ini+i];
    for(int j=0;j<fin-mitad;j++) right[j]=arr[j+mitad+1];
    int i=0,j=0,k=ini;
    while(i<mitad-ini+1 && j<fin-mitad){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }else{
            arr[k]=right[j];
            j++;
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
void mergeSort(int arr[],int ini,int fin){
    if(ini<fin){
        int mitad =(ini+fin)/2;
        mergeSort(arr,ini,mitad);
        mergeSort(arr,mitad+1,fin);
        merge(arr,ini,mitad,fin); //last task for every recursion!
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%30;
    }
    print(arr,n);
    mergeSort(arr,0,n-1);
    print(arr,n);
    return 0;
}
