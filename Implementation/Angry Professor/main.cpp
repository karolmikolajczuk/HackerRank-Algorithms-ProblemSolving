#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T, N, K;
    cin>>T;
    while(T--){
        cin>>N>>K;
        vector<int>en(N);
        for(int i=0; i<N; i++){
            cin>>en[i];
        }
        for(int i=0; i<N; i++){
            if(en[i]<=0)
                K--;
        }
        if(K<=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    
    
    return 0;
}
