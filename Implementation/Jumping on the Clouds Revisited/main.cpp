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
    int n; //nr of clouds
    int k; //jump distance
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i]; // 1 thunder 0 ordinary
    }
    int Energy=100, index_present=0;
    do{
        index_present+=k;
        Energy--;
        if(index_present>=n){
            index_present=index_present%n;
        }
        if(c[index_present]==1)
            Energy-=2;
    }while(index_present!=0);
    cout<<Energy<<endl;
    return 0;
}
