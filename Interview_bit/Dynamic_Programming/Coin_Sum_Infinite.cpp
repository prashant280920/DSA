#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    n = A.size();
    long int dp[B+1];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    sort(A.begin(), A.end());
    for(int i=0; i<n; i++){
        for(int j = 1; j<=B; j++){
            if(j>=A[i]){
                dp[j] += dp[j-A[i]];
                dp[j]%= 1000007;
            }    
        }
    }
    cout << dp[B] << endl;
    return 0;
}