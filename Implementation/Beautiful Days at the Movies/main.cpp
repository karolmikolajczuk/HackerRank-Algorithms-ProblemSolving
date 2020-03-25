#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int reverse(int num){
    int sth=0;
    while(num){
        sth=(sth*10)+(num%10);
        num/=10;
    }
    return sth;
}

int beatiful(int i, int j, int k){
    int count=0;
    for(;i<=j;i++){
        if((i-reverse(i))%k==0)
            count++;
    }
    return count;
}

int main() {
    int i,j,k,count;
    cin>>i>>j>>k;
    count=beatiful(i,j,k);
    cout<<count<<endl;
    return 0;
}
