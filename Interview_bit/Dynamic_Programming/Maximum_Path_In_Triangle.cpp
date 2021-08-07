#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n;
    vector<vector<int>> A(n,vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> s;
            A[i][j] = s;
        }
    }
    n = A.size();
    for(int row = n-2; row>=0; row--){
        for(int col = row; col>=0; col--){
            A[row][col] = max(A[row][col]+A[row+1][col], A[row][col]+A[row+1][col+1]);
        }
    }
    cout << A[0][0] << endl;
    return 0;
}