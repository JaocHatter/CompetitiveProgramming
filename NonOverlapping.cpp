#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
struct CompareSecondElement {
    bool operator()(const vector<int>& v1, const vector<int>& v2) const {
        return v1[1]<v2[1];
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>> intervals;
    forn(i,n){
        vector<int> interval(2);
        std::cin >> interval[0] >> interval[1];
        intervals.push_back(interval);
    }
    // debemos ordenar en función al segundo elementos
    sort(intervals.begin(),intervals.end(),CompareSecondElement());
    int cont=intervals.size()-1,target=intervals[0][1];
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]>=target){
            cont--;
            target=intervals[i][1];
        }
    }
    /*int cont=0,target=intervals[0][1];
    auto it=intervals.begin();
    while(it!=intervals.end()){
        auto it = lower_bound(intervals.begin(), intervals.end(),target,CompareFirstElement());
        if (it != intervals.end()) {
            cont++;
            target = (*it)[1];
        }    
    }
    */
    forn(i,n){
        cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
    }
    cout<<"RPTA: "<<cont;
    return 0;
}