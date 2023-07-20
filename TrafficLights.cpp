#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=1;i<n;i++)
#define ll long long
#define pb push_back
int main(){
    int x,n;
    cin>>x>>n;
    int ubi,lf,rg;
    set<int> street;
    multiset<int> lenghts;
    vector<int> lm;
    street.insert(0);
    street.insert(x);
    cin>>ubi;
    auto it=street.lower_bound(ubi);
    rg=*(it--)-ubi;
    lf=ubi-*(it);
    street.insert(ubi);
    lenghts.insert(rg);
    lenghts.insert(lf);
    lm.pb(max(rg,lf));
    forn(i,n){
        cin>>ubi;
        auto it=street.lower_bound(ubi);
        rg=*(it--)-ubi;
        lf=ubi-*(it);
        street.insert(ubi);
        lenghts.erase(lenghts.find(rg + lf));
        lenghts.insert(rg);
        lenghts.insert(lf);
        auto iter=lenghts.rbegin();
        lm.pb(*iter);
    }
    for(int x:lm) cout<<x<<" ";
    return 0;
}