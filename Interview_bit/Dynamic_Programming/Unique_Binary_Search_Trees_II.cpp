#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    int dp[A+1];
    dp[0] = 1;
    for(int i=1; i<=A; i++){
        dp[i] = 0;
        for(int j=1; j<=i; j++){
            dp[i] += (dp[i-j]*dp[j-1]);
        }
    }
    cout << dp[A] << endl;
    return 0;
}