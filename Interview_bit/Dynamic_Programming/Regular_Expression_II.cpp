#include<bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A;
    cin >> B;
    int n = B.length(), m = A.length();
    vector<vector<bool>> dp(n+1, vector<bool> (m+1, false));
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            if(i==0 && j==0) dp[i][j] = true;
            else if(i==0) dp[i][j] = false;
            else if(j==0){
                if(B[i-1]=='*' && i-2>=0) dp[i][j] = dp[i-2][j];
            }else{
                if(B[i-1]=='.') dp[i][j] = dp[i-1][j-1];
                else if(B[i-1]=='*'){
                    dp[i][j] = dp[i-2][j];
                    if(B[i-2]=='.') dp[i][j] = dp[i][j-1] || dp[i][j];
                    else if(B[i-2]==A[j-1]) dp[i][j] = dp[i][j-1] || dp[i][j];
                }else{
                    if(B[i-1]==A[j-1]) dp[i][j] = dp[i-1][j-1];
                }
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}