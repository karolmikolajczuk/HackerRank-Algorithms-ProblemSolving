#include <bits/stdc++.h>

using namespace std;

/*
120
124
244
----
30 wrzesien 09
----
31
30
31
*/





string solve(int year){
    int dzien=0,miesiac=9;
    string wynik="";
    if(year<1918){
        if(year%4==0){
            dzien=256-244;
        }else{
            dzien=256-243;
        }
    }else if(year==1918){
        dzien=256-230;
    }else{
        if((year%400==0) || (year%4==0 && year%100!=0)){
            dzien=256-244;
        }else{
            dzien=256-243;
        }
    }
    wynik+=to_string(dzien)+"."+"0"+to_string(miesiac)+"."+to_string(year);
    return wynik;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
