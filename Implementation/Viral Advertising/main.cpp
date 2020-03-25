#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //zawsze 5 osob na start
    //1szy dzien to floor(5/2)
    //2gi dzien to floor(tego co mamy/2)*3
    ///.....
    int a, temp=5, ppl=0;
    cin>>a;
    while(a--){
        temp=floor(temp/2);
        ppl+=temp;
        temp*=3;
    }
    cout<<ppl<<endl;
    return 0;
}
