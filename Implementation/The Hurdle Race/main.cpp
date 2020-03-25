#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    vector<int>hurdles(n);
    for(int i=0; i<n; i++){
        cin>>hurdles[i];
    }
    sort(hurdles.begin(), hurdles.end());
    k-=hurdles[hurdles.size()-1];
    if(k<0){
        k*=-1;
        cout<<k;
    }
    else{
        cout<<"0";
    }
    return 0;
}
