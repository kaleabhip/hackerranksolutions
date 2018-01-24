#include <iostream>

using namespace std;
// Involves basics of comparison. 
int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int pa,pb; // pa = Alice's points ; pb = Bob's points
    if(a0<b0){
        pb += 1;
    }else if(a0>b0){
        pa += 1;
    }else{
        //Do nothing
    }
    if(a1<b1){
        pb += 1;
    }else if(a1>b1){
        pa += 1;
    }else{
        //Do nothing
    }
    if(a2<b2){
        pb += 1;
    }else if(a2>b2){
        pa += 1;
    }else{
        //Do nothing
    }
    cout << pa << " " << pb;
    return 0;
}