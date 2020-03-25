#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,d,m,sum=0,count=0;
    cin>>n;
    
    vector<int>bloki(n);
    
    for(int i=0; i<n; i++){
        cin>>bloki[i];
    }
    
    cin>>d>>m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=bloki[i+j];
        }
        if(sum==d){
            count++;
        }
        sum=0;
    }
    
    cout<<count<<endl;
    return 0;
}
