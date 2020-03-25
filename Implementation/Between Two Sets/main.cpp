#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    int check=0;
    vector < int > x;
    vector < int > y;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i=1; i<=b[0]; i++){
        for(int j=0; j<a.size(); j++){
            if(i%a[j]!=0 || b[0]%i!=0){
                check++;
            }
        }
        if(check==0){
            x.push_back(i);
        }else{
            check=0;
        }
    }
    
    sort(x.begin(), x.end());
    
    for(int i=0; i<b.size(); i++){
        for(int j=0; j<x.size(); j++){
            if((b[i]%x[j])!=0){
                x.erase(x.begin()+j);
            }
        }
    }
      for(int i=0; i<b.size(); i++){
        for(int j=0; j<x.size(); j++){
            if(b[i]%x[j]!=0){
                x.erase(x.begin()+j);   
            }
        }
    }
    
    
    return x.size();
}



int main() {
    int n,m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    
    int total = getTotalX(a, b);
    cout << total << endl;
    
    return 0;
}



