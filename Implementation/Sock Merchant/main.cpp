#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,count=0;
    cin>>n;
    
    vector<int>type(n);
    
    for(int i=0; i<n; i++){
        cin>>type[i];
    }
    
    int tab[101];
    for(int i=0; i<101; i++){
        tab[i]=0;
    }
    for(int i=0; i<n; i++){
        tab[type[i]]++;
        if(tab[type[i]]%2==0){
            count++;
            tab[type[i]]-=2;
        }
    }
    cout<<count<<endl;
    return 0;
}
