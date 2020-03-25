#include <iostream>
using namespace std;
int main() {
    unsigned long int T, liczba_cukierkow, liczba_wiezniow, start_id_wiezien;
    cin>>T;
    while(T--){
        cin>>liczba_wiezniow>>liczba_cukierkow>>start_id_wiezien;
        /*
        while(--liczba_cukierkow){
            if(++start_id_wiezien>liczba_wiezniow)
                start_id_wiezien=1;
        }
        */
        int wynik=((liczba_cukierkow+(--start_id_wiezien))%liczba_wiezniow);
        if(wynik==0)
            cout<<liczba_wiezniow<<endl;
        else
            cout<<wynik<<endl;        
    }
    return 0;
}
