#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    vector<long long int> dp(2*A+1,0);
    dp[0] = dp[2] = 1;
    for(int i=4; i<=(2*A); i+=2 ){
        for(int j=0; j<(i); j+=2){
            dp[i] += ((dp[j]*dp[i-2-j])%1000000007);
            dp[i] %= 1000000007;
        } 
    }
    cout << dp[2*A]%1000000007 << endl;
    return 0;
}