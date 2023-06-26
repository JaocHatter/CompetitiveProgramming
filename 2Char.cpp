#include <bits/stdc++.h>
using namespace std;
int main(){
    bool det=0;
    map<char,int> aux;
    map<set<char>,int,greater<set<char>>> help;
    set<char> aux2;
    string wrds; 
    int n; 
    cin>>n; 
    while(n--){
        cin>>wrds;
        det=0;
        for(int i=0;i<wrds.length();i++){
            if(aux.count(wrds[i])==0){
                aux[wrds[i]]=0;
                aux2.insert(wrds[i]);
                }
            aux[wrds[i]]++;
            if(aux.size()>2){
                det=1;
                break;
            }
        }
        if(det){ aux.clear(); //si tiene mas de 3 letras, no se evalua...
                 aux2.clear();
            continue;}  
        if(help.count(aux2)==0){ //si no hay ninguno   
            if((int)aux.size()==1) help[aux2]=(aux.begin())->second;   //si la palabra está formada por 1 letra
            else help[aux2]=(aux.begin())->second+(aux.rbegin())->second;  //si está formada por 2 letras
        }
        else{       //por si ya existe un conjunto con las mismas letras
            if((int)aux.size()==1) help[aux2]+=(aux.begin())->second;
            else help[aux2]+=(aux.begin())->second+(aux.rbegin())->second;
        }
        //limpieza
        aux.clear();
        aux2.clear();
    }
    long long payment=0,aux_bro;
        for(auto it:help){
            aux_bro=0;
            if((int)it.first.size()!=1){
                for(auto x:it.first){
                    //por cada conjunto de 2 letras, sumo a aux_bro la cantidad de letras solitarias (ejemp: {a,b}-> sumo la cantidad de {a} y la cantidad de {b})
                    if(help.find({x})!=help.end()) aux_bro+=help[{x}];
                }
            }
            payment=max(payment,aux_bro+it.second);
        }
    cout<<payment;
    return 0;
}