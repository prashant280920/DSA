#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int n = A.length();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i-1] == A[n-j])
                dp[i][j] = 1+ dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}