#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ile_dan, ktorego_nie_jadla, suma=0, b;
    cin>>ile_dan>>ktorego_nie_jadla;
    vector<int>cena_posilkow(ile_dan);
    for(int i=0; i<ile_dan; i++){
        cin>>cena_posilkow[i];
    }
    cin>>b;
    
    for(int i=0; i<ile_dan; i++){
        suma+=cena_posilkow[i];
    }
    
    suma-=cena_posilkow[ktorego_nie_jadla];
    if(b==(suma/2))
        cout<<"Bon Appetit"<<endl;
    else
        cout<<b-(suma/2)<<endl;
    
    
    
    return 0;
}
