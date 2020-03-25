#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> s(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> s[scores_i];
    }
    int m;
    cin >> m;
    vector<int> a(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> a[alice_i];
    }
    // your code goes here
    vector<int> r(n);
    int rnk=1;
    r[0]=rnk;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) r[i]=rnk;
        else r[i] = ++rnk;
    }
    int j=0;
    for(int i=n-1; i>0 && j<m; i--){
        if (s[i] >= a[j]) {cout << r[i]+(s[i]>a[j]) << endl; j++; i++;} 
    }
    while(j<m){cout << 1+(s[0]>a[m-1]) << endl; j++;}
    return 0;
}