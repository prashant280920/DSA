#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int B;
    cin >> B;
    int n = A.length();
    if(n<B) return -1;
    int dp[n+1][B+1];
    for(int i=0; i<n+1; i++) fill(dp[i],dp[i]+B+1, 1e9);
    dp[0][0] = 0;
    for(int col = 1; col<=B; col++){
        for(int row = 1; row<=n; row++){
            int w=0, b=0;
            for(int d=row; d>=1; d--){
                w+=(A[d-1]=='W');
                b+=(A[d-1]=='B');
                dp[row][col] = min(dp[row][col],dp[d-1][col-1]+w*b );
            }
        }
    }
    cout << dp[n][B] << endl;
    return 0;
}