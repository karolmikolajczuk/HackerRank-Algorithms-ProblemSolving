#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float licznik0=0, licznikplus=0, licznikminus=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            licznikminus++;
        }else if(arr[i]>0){
            licznikplus++;
        }else{
            licznik0++;
        }
    }
    
    licznikminus=licznikminus/n;
    licznikplus=licznikplus/n;
    licznik0=licznik0/n;
    
    cout<<licznikplus<<endl;
    cout<<licznikminus<<endl;
    cout<<licznik0<<endl;
    
    return 0;
}
