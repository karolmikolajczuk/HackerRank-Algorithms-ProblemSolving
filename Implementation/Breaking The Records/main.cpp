#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, low, high, countlow=0, counthigh=0;
    cin>>n;
    vector<int>points(n);
    
    for(int i=0; i<n; i++){
        cin>>points[i];
    }
    
    low=points[0];
    high=points[0];
    
    for(int i=1; i<n; i++){
        if(low>points[i]){
            countlow++;
            low=points[i];
        }
        if(high<points[i]){
            counthigh++;
            high=points[i];
        }   
    }
    
    cout<<counthigh<<" "<<countlow<<endl;
    return 0;
}
