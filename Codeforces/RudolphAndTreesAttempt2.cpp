#include <bits/stdc++.h>
using namespace std;
//only works for d=2*h
#define forn(i,n) for(int i=0;i<n;i++)
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.setf(ios::fixed);
    cout <<setprecision(10); // Establece la precisión de salida a 6 decimales
    vector<long double> nums;
    int c,n,d,h;
    cin>>c;
    while(c--){
        int lim1,lim2;
        cin>>n>>d>>h;
        long double area=0,aux1;
        //first branch
        cin>>lim1;
        //algorithm
        forn(i,n-1){
            cin>>lim2;
            if(lim1+h>lim2){
                //this must change
                aux1=(((long double)d*(lim1+h-lim2)/h+d));
                area+=aux1/2.0*(lim2-lim1);
            }else{
                area+=(long double)d*h/2.0;
            }
            lim1=lim2;
        }
        //Last branch area
        area+=(long double)d*h/2.0;
        nums.push_back(area);
    }
    for(long double x:nums){
        cout<<x<<endl;
    }
    return 0;
} 
/*
5
2 5 1
7 10
1 2 4
7
2 5 5
7 9
2 1 2
7 13
2 2 4
1 8
*/