#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int suma=0,max,min;
    vector<int> arr(5);
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==j)
                continue;
            else
                suma+=arr[j];   
        }
        if(max<suma || i==0)
            max=suma;
        if(min>suma || i==0)
            min=suma;
        
        suma=0;
    }
    
    cout<<min<<" "<<max<<endl;
    return 0;
}
