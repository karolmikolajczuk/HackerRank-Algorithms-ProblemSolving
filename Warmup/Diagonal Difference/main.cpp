#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,wynik,x1=0,x2=0;
    cin >> n;
    
    vector< vector<int> > a(n,vector<int>(n));
    
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    for(int i=0; i<n; i++){
        int j=i;
        x1+=a[i][j];
    }
    
    for(int i=0; i<n; i++){
        int j=n-i-1;
        x2+=a[i][j];
    }
    
    wynik=x1-x2;
    
    if(wynik<0)
        wynik*=(-1);
    
    cout<<wynik;
    return 0;
}
