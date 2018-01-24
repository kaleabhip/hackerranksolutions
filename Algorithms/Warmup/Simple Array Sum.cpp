#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    int a;
    for(int i = 0;i < n;i++){
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}
