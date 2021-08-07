#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<vector<int>> A;
    for(int i=0; i<n; i++){
        vector<int> temp ;
        for(int j=0; j<i+1; j++){
            cin >> s;
            temp.push_back(s);
        }
        A.push_back(temp);
    }
    n = A.size();
    //int m = A[n-1].size();
    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0; j--){
            A[i][j]+=min(A[i+1][j], A[i+1][j+1]);
            
        }
    }
    cout << A[0][0] << endl;
    return 0;
}