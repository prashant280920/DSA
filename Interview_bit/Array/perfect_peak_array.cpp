#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>t;A.push_back(t);
    }
    n = A.size();
    int left_max[n], right_min[n];
    memset(left_max,0,sizeof left_max);
    memset(right_min,0,sizeof right_min);
 
    int min = A[n-1], max = A[0];
    for(int i=1; i<n; i++){
        if (max < A[i-1]){
            max = A[i-1];
        }
        left_max[i] = max; 
    }
 
    for(int i=n-2; i>=0; i--){
        if(min > A[i+1]){
            min = A[i+1];
        }
        right_min[i] = min; 
    }
 
    for (int i=1 ; i<n-1; i++){
        if (A[i]>left_max[i] && A[i]<right_min[i]){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 <<endl;

    return 0;
}