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
    n = A.size(); m = A[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            if(i==n-1 && j==m-1) dp[i][j] = 1;
            else if(i==n-1){
                if(A[i][j]<A[i][j+1] && dp[i][j+1]==1) dp[i][j] = 1;
            }  
            else if(j==m-1){
                if( A[i][j]<A[i+1][j] && dp[i+1][j]==1) dp[i][j] = 1;
            }
            else{
                if(A[i][j]<A[i][j+1] || A[i][j]<A[i+1][j]){
                    if(dp[i+1][j] || dp[i][j+1]) dp[i][j] = 1;
                }
            }
        }
    }
    if(dp[0][0]==0){
        cout << -1 << endl;
        return -1;
    } 
    cout << n+m-1 << endl;
    return 0;
}