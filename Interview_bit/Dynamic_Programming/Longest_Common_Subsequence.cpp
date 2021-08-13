#include<bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    int n = A.length(), m = B.length();
    int dp[n+1][m+1];
    for(int i=n; i>=0; i--){
        for(int j=m; j>=0; j--){
            if(i==n || j==m) dp[i][j] = 0;
            else{
                if(A[i]==B[j]) dp[i][j] = dp[i+1][j+1]+1;
                else dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}