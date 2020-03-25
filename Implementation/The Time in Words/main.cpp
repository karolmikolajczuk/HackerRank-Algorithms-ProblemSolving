#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int H, Min;
    cin>>H>>Min;
    
    string hour[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    string minute[]={
                        "null","one","two","three","four","five","six","seven","eight","nine","ten", 
                        "eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty",
                        "twenty one","twenty two","twenty three","twenty four","twenty five",
                        "twenty six","twenty seven","twenty eight","twenty nine","half",
                        "twenty nine","twenty eight","twenty seven","twenty six","twenty five",
                        "twenty four","twenty three","twenty two","twenty one","twenty",
                        "nineteen","eighteen","seventeen","sixteen","quarter","fourteen","thirteen","twelve","eleven",
                        "ten","nine","eight","seven","six","five","four","three","two","one"};
    
    string wynik;
    if(Min==0){
        wynik = hour[H-1] + " o' clock";   
    }else if(Min==15){
        wynik = minute[Min] + " past " + hour[H-1];   
    }else if(Min<30){
        wynik = minute[Min] + " minutes past " + hour[H-1];
    }else if(Min==30){
        wynik = "half past " + hour[H-1];
    }else if(Min==45){
        wynik = minute[Min] + " to " + hour[H];
    }else{
        wynik = minute[Min] + " minutes to " + hour[H];
    }
    
    cout<<wynik<<endl;
    
    return 0;
}
