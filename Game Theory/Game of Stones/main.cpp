#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    
    while(T--){
        int a;
        cin>>a;
        
        if(a%7<2){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
    
    
    
    return 0;
}
