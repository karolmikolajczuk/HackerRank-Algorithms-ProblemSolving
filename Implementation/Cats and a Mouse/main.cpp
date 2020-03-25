#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q,x,y,z,distance_X, distance_Y;
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>x>>y>>z;
        distance_X=z-x;
        if(distance_X<0)
            distance_X*=-1;
        distance_Y=z-y;
        if(distance_Y<0)
            distance_Y*=-1;
        if(distance_X<distance_Y)
            cout<<"Cat A"<<endl;
        else if(distance_X==distance_Y)
            cout<<"Mouse C"<<endl;
        else
            cout<<"Cat B"<<endl;
    }
    return 0;
}
