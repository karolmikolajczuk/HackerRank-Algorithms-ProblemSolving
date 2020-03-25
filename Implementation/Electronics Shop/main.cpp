#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,n,m;
    cin>>s>>n>>m;
    vector<int>en(n);
    for(int i=0; i<n; i++){
        cin>>en[i];
    }
    vector<int>em(m);
    for(int i=0; i<m; i++){
        cin>>em[i];
    }
    int leftover=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(en[i]+em[j]>0 && en[i]+em[j]<=s && en[i]+em[j]>leftover){
                leftover=en[i]+em[j];
            }
        }
    }
    if(leftover==0)
        leftover=-1;
    cout<<leftover;
    return 0;
}
