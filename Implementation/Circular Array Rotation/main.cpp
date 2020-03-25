#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,q;
    cin>>n>>k>>q;
    
    vector<int>tablica(n);
    vector<int>queries(q);
    
    for(int i=0; i<n; i++){
        cin>>tablica[(i+k)%n];
    }
    
    for(int i=0; i<q; i++){
        cin>>queries[i];
    }
    
    for(int i=0; i<q; i++){
        cout<<tablica[queries[i]]<<endl;
    }
    
    return 0;
}
