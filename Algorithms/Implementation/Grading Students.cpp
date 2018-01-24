#include <bits/stdc++.h>

using namespace std;
// basically consider all cases and the problem is solved
vector < int > solve(vector < int > grades){
    // Complete this function
    int n = grades.size();
    vector<int> result(n);
    for(int i=0;i<n;i++){
        if(grades[i]<38){
            result[i] = grades[i];
        }
        else if(((((grades[i]/5)+1)*5)-grades[i])<3) { // grades[i]/5 = floor(ratio of grade and 5) -> +1 gives ceiling -> *5 gives required multiple of 5 
            result[i] = ((grades[i]/5)+1)*5 ; 
        }
        else{
            result[i] = grades[i];
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
