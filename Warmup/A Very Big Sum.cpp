#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long sum=0;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       sum += arr[arr_i];
    }
    cout << sum;
    return 0;