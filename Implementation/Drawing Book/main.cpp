#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, p, count1=0, count2=0;
    cin>>n>>p;
    if(n%2==0)
        n++;
    
    for(int i=0; i<p; i++){
        count1++;
    }
    for(int i=n; i>p; i--){
        count2++;
    }
    if(count1/2>count2/2)
        cout<<count2/2;
    else
        cout<<count1/2;
    
    return 0;
}
