    #include <bits/stdc++.h>
    using namespace std;
    string rpt="NO";
    bool divide(string a, string b);
    bool equal(string a,string b){
        if(a==b){return true;}
        else{
            return divide(a,b);
            }
        return false;
    }
    bool divide(string a,string b){
        if(a.length()==1 or b.length()==1){
            return false;
        }
        if(a.length()!=b.length()){
            return false;
        }
        int l=a.length();
        if(l%2==1){
            return false;
        }
        string a1=a.substr(0,l/2),a2=a.substr(l/2,l/2),b1=b.substr(0,l/2),b2=b.substr(l/2,l/2);
        //cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
        if((equal(a1,b1) && equal(a2,b2)) || (equal(a1,b2) && equal(a2,b1))){
            rpt="YES";
            return true;
        }else{
            rpt="NO";
            return false;
        }
    }
     
    int main(){
        string a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES";
            return 0;
        }
        //algorithm
        divide(a,b);
        cout<<rpt;
        return 0;
    }