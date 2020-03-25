#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, max=-1, el=1;
    cin >> n;
    
    vector<int> types(n);
    vector<int> tab(n);
    
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    
    sort(types.begin(), types.end());
    
    for(int i=1; i<=5; i++){
       for(int j=0; j<types.size(); j++){
           if(i==types[j]){
               tab[i]++;
           }
       }
    }
    
    for(int ele=1; ele<=5; ele++){
        if(tab[ele]>max)
            max=tab[ele];
    }
    
    for(;el<=5; el++){
        if(tab[el]==max)
            break;
    }
    cout<<el;
    
    return 0;
}
