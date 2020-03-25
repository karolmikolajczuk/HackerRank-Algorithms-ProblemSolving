#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int length(int a){
    int len=0;
    while(a){
        a/=10;
        len++;
    }
    return len;
}
//count podzielny przez kazda z cyfr liczby
int divide(int len, int number){
    vector<int>tab(len);
    int countd=0;
    int temp=number;
    for(int i=0; i<len; i++){
        tab[i]=number%10;
        number/=10;
    }
    for(int i=0; i<len; i++){
        if((tab[i]!=0) && !(temp%tab[i]))
            countd++;
    }
    return countd;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,count;
        cin >> n;
        int len=length(n);
        
        count = divide(len, n);
        cout << count << endl;
    }
    return 0;
}
