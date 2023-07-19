#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
//ordenamiento personalizado
bool compare(const pair<int,long long>& a, const pair<int,long long>& b){
    if(a.first<b.first) return true;
    else if(a.first==b.first){
        return a.second>b.second;
    }
    return false;
}
int main(){
    int t,aux2;
    cin>>t;
    aux2=t;
    vector<long long> rptas;
    while(t--){
        int n,a,cont=0,aux;
        long long score=0,b;
        cin>>n;
        aux=n;
        vector<pair<int,long long>> lamps;
        while(n--){
            cin>>a>>b;
            lamps.pb({a,b});
        }
        sort(lamps.begin(),lamps.end(),compare);
        //algorithm
        forn(i,aux){
            if(cont<lamps[i].first){
                cont++;
                score+=lamps[i].second;
                if(i==0) continue;
            }
            if(lamps[i].first!=lamps[i-1].first){
                cont=1;
            }
        }
        rptas.pb(score);
        /* debug...
        forn(i,aux){
            cout<<lamps[i].first<<" "<<lamps[i].second<<endl;
        }*/
    }
    forn(i,aux2){
        cout<<rptas[i]<<endl;
    }
    return 0;
}