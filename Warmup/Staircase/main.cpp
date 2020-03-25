#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int a=0; a<n-i; a++){
            cout<<" ";
        }
        for(int b=0; b<i; b++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
