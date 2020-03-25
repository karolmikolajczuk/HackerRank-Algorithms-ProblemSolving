#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,tree_size=1;
    cin>>T;
    vector<int>tests(T);
    for(int i=0; i<T; i++){
        cin>>tests[i];
    }
    
    for(int i=0; i<T; i++){
        for(int j=1; j<=tests[i]; j++){
            if(j%2!=0)
                tree_size*=2;
            else
                tree_size++;
        }
        cout<<tree_size<<endl;
        tree_size=1;
    }
    
    return 0;
}
