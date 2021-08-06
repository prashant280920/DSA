#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, C;
    cin >> n;
    vector<int> A, B;
    for(int i=0; i<n; i++){
        cin >> C;
        A.push_back(C);
    }
    for(int i=0; i<n; i++){
        cin >> C;
        B.push_back(C);
    }
    cin >> C;
    n = A.size();
    int dp[n+1][C+1];
    for(int i=0; i<n+1; i++){
        for(int j=0; j<C+1; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }else {
                dp[i][j] = dp[i-1][j];
                if(j-B[i-1]>=0){
                    dp[i][j] = max(dp[i][j], A[i-1]+dp[i-1][j -B[i-1]]);
                }
            }
        }
    }
    cout << dp[n][C] << endl;
    return 0;
}