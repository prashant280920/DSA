#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, s;
    cin >> n>>m;
    vector<vector<int>> A(n,vector<int>(m,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> s;
            A[i][j] = s;
        }
    }
    n = A.size(); m=A[0].size();
    int  maxi = INT_MIN;
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            if(row==0 || col==0){
                maxi = max(maxi, A[row][col]);
            }
            else if(A[row][col]==1){
                A[row][col] = min(A[row][col-1], min(A[row-1][col-1], A[row-1][col]))+1;
                maxi = max(maxi, A[row][col]);
            }
            
        }
        
    }
    cout << maxi*maxi << endl;
    return 0;
}