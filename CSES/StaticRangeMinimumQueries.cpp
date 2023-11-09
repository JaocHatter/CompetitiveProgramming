#include <bits/stdc++.h>
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;

ll lookup[200001][50];
//main  
void preprocesar(ll arr[], int n)
{
    // Initialize M for the 
    // intervals with length 1
    for (int i = 0; i < n; i++)
        lookup[i][0] = i;
    for (int j = 1; (1 << j) <= n; j++){
        for (int i = 0; (i + (1 << j) - 1) < n; i++) 
        {
            if(arr[lookup[i][j - 1]]<arr[lookup[i+(1<<(j-1))][j-1]])
                lookup[i][j] = lookup[i][j - 1];
            else lookup[i][j] = lookup[i + (1 << (j - 1))][j - 1];
        }
    }
}
int main(){
    int n,q;
    scanf("%d %d", &n, &q);
    ll arr[n];
    forn(i,n){
        cin>>arr[i];
    }
    preprocesar(arr,n);
    int a,b;
    vector<ll> rptas;
    forn(i,q){
        scanf("%d %d", &a, &b);
        //algorithm
        // hallemos la longitud para ver en que fila de lookout vamos a trabajar 
        ll j = (ll)log2(b-a+1);
        //ahora busquemos a ese hijo de puta
        rptas.pb(min(arr[lookup[b - (1<<j) ][j]],arr[lookup[a-1][j]]));
    }
    for(ll x: rptas){
        cout<<x<<endl;
    }
}