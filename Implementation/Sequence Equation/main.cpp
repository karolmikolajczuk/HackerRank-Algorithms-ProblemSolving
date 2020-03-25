#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    vector<int>tablica(a+1);
    for(int i=1; i<=a; i++){
        cin>>tablica[i];
    }
    //1=P(3)=P(P(2))---->y=2
    for(int x=1; x<=a; x++){
        int temp;
        int y;
        for(int i=1; i<=a; i++){
            if(tablica[i]==x){
                temp=i;
                break;
            }
        }
        for(int i=1; i<=a; i++){
            if(tablica[i]==temp){
                y=i;
                break;
            }
        }
        cout<<y<<endl;
    }
    
    
    return 0;
}
