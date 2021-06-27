#include <bits/stdc++.h>
using namespace std;


int main(){

    int n,t;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> t; A.push_back(t);
    }

    int addmax = INT_MIN, addmin = INT_MAX, minus_max = INT_MIN, minus_min = INT_MAX;
    n = A.size();
    for(int i=0; i<n; i++){
        if(addmax<A[i]+i){
            addmax = A[i]+i;
        }
        if(addmin>A[i]+i){
            addmin = A[i]+i;
        }
        if(minus_max<A[i]-i){
            minus_max = A[i]-i;
        }
        if(minus_min>A[i]-i){
            minus_min = A[i]-i;
        }
    }

    cout << "Maximum Absolute Difference: " << max(abs(addmax - addmin), abs(minus_max - minus_min)) << endl;

    return 0;
}