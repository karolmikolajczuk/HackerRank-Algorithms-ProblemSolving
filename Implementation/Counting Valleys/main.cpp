#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,wynik=0,zero=0,poprz=0;
    cin>>n;
    string str;
    char u='U';
    cin>>str;        
    
    for(int i=0; i<n; i++){
        poprz=zero;
        if(str[i]=='U'){
            zero++;
        }else{
            zero--;
        }    
        if((poprz==0) && (zero<0)){
            wynik++;
        }
    }
    cout<<wynik;
    return 0;
}
