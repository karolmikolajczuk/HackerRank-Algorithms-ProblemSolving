#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, count=0, max=0;
    //zapelnienie vectora
    cin>>n;
    vector<int>liczby(n);
    for(int i=0; i<n; i++){
        cin>>liczby[i];
    }
    
    vector<int>check;
    for(int i=0; i<n; i++){
        //daj pierwsza liczbe do vectora
        check.push_back(liczby[i]);
        //sprawdz kazdy element vectora
        for(int j=0; j<n; j++){
            //chyba ze jest to ten sam to przeskocz do next
            if(i==j)
                continue;
            //sprawdz czy pozostale liczby maja 1 roznicy
            for(int a=0; a<check.size(); a++){
                //jezeli ma z jakakolwiek liczba roznice wieksza niz 1
                if(abs(check[a]-liczby[j])>1){
                    //to zwieksz licznik
                    count++;
                    //przerwij petle
                    break;
                }
            }
            //sprawdz czy licznik ==0 jak tak to dodaj liczbe do vectora
            if(count==0)
                check.push_back(liczby[j]);
            //licznik zrownaj do 0
            else 
                count=0;
        }
        //po sprawdzeniu kazdej liczby ze soba, zobacz czy ilosc elementow w vectorze jest wieksza od dotychczasowego maxa, jesli jest to ustaw nowy max
        if(max<check.size()){
            max=check.size();
        }
        //wyczysc vector ktory bedzie sluzyl za sprawdzenie nastepnym
        check.clear();    
    }
    //wyswietl max
    cout<<max<<endl; 
    return 0;
}
