#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long long int s; //x1 domu
    long long int t; //x2 domu
    cin >> s >> t;
    long long int a; //x1 jabloni
    long long int b; //x1 pomar.
    cin >> a >> b;
    long long int m; //ilosc jablek
    long long int n; //ilosc pomar.
    cin >> m >> n;
    //podajemy do tablicy odleglosci jablek
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    //podajemy do tablicy odleglosci pomaranczy
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    int count_apple=0, count_orange=0;

    for(int i=0; i<m; i++){
        if(a+apple[i]>=s && a+apple[i]<=t){
            count_apple++;
        }
    }
    for(int i=0; i<n; i++){
        if(b+orange[i]>=s && b+orange[i]<=t){
            count_orange++;
        }
    }
    cout<<count_apple<<endl<<count_orange<<endl;
    return 0;
}
