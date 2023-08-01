#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int cuenta=0,maximo=0,attempt=1;
    int repeat[26];
    fill(repeat,repeat+26,0);
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(repeat[str[i]-'a']==attempt){
            maximo=max(maximo,cuenta);
            cuenta=1;
            repeat[str[i]-'a']++; //marcamos como que encontrado en el siguiente intento
            attempt++;
            continue;
        }
        repeat[str[i]-'a']++;
        cuenta++;
    }
    cout<<maximo;
    return 0;
}