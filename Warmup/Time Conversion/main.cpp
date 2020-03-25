#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*
    AM:
        00-11 
        kiedy 12AM -> 24 -> 00:...
    PM: 
        12PM -> 12
        1PM -> 13... 
        11PM -> 23
*/

int main(){
    string time, hh, mm, ss, am, what, wynik=""; 
    cin >> time;
    am="AM";
    hh=time.substr(0,2);
    mm=time.substr(3,2);
    ss=time.substr(6,2);
    what = time.substr(time.length()-2, 2);
    //cout<<hh<<endl<<mm<<endl<<ss<<endl;
    if(what==am){
        int pom = stoi(hh);
        
        if(pom==12)
            wynik+="00";
        else
            wynik+=hh;
        wynik+=":"+mm+":"+ss;
        //if(pom=stoi(mm)>=0 && pom<=59)
          //  wynik+=":"+to_string(pom);
        //if(pom=stoi(ss)>=0 && pom<=59)
          //  wynik+=":"+to_string(pom);
        
        cout<<wynik;
    }else{
        int pom = stoi(hh);
        if(pom==12){
            wynik+="12";
            wynik+=":"+mm+":"+ss;
            cout<<wynik;
        }
        else{
            pom+=12;
            wynik+=to_string(pom);
            wynik+=":"+mm+":"+ss;
            //if(pom=stoi(mm)>=0 && pom<=59)
              //  wynik+=":"+to_string(pom);
            //if(pom=stoi(ss)>=0 && pom<=59)
              //  wynik+=":"+to_string(pom);
        cout<<wynik;
        }
    }
   
    return 0;
}
