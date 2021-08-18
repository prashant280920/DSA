#include<bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A;
    cin >> B;
    int n = B.size(), m = A.size();
    vector<vector<bool>> dp(n+1, vector<bool> (m+1, false));
    for(int i=n; i>=0; i--){
        for(int j=m; j>=0; j--){
            if(i==n && j==m){
                dp[i][j] = true;
            }else if(i==n){
                dp[i][j] = false;
            }else if(j==m){
                if(B[i]=='*') dp[i][j] = dp[i+1][j];
            }else{
                if(B[i]=='?') dp[i][j] = dp[i+1][j+1];
                else if(B[i]=='*') dp[i][j] = dp[i+1][j] || dp[i][j+1];
                else{
                    if(B[i]==A[j]) dp[i][j] = dp[i+1][j+1];
                    else dp[i][j] = false;
                } 
            }
        }
    }
    cout << dp[0][0] << endl;

    return 0;
}