#include <iostream>
#include <vector>
#include <string>
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
//auto start = chrono::steady_clock::now();
int main(){
    int n,m,k,acum,rpt=0;
    bool det;
    cin>>n>>m;
    vector<vector<int>> s;
    vector<int> p(m);
    forn(i,m){
        cin>>k;
        vector<int> v(k);
        forn(j,k){
            cin>>v[j];
            v[j]--;
        }
        s.pb(v);
    }
    forn(i,m){
        cin>>p[i];
    }
    //bruteforce
    forn(x,(1<<n)){
        det=false;
        forn(i,s.size()){
            acum=0;
            forn(j,s[i].size()){
                if((1<<s[i][j])&x) acum++; 
            }
            if(acum%2!=p[i]){
                det=true;
                break;
            }
        }
        if(!det) rpt++;
    }
    cout<<rpt;
    /*cout << "\n";
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
    */
    return 0;
}