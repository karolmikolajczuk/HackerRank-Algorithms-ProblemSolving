#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tab[123], a=0, wynik=0, max=0;
    string str;
    vector<int>height(26);
    
    for(int i=0; i<26; i++){
        cin>>height[i];
    }
    for(int i=97; i<=122; i++){
        tab[i]=height[a];
        a++;
    }
    cin>>str;
    
    //wynik=wielkosc najwiekszej litery*ilosc liter
        
    for(int i=0; i<str.length(); i++){
        if(max<tab[str[i]])
            max=tab[str[i]];
    }
    wynik=str.length()*max;
    cout<<wynik<<endl;
    return 0;
}
