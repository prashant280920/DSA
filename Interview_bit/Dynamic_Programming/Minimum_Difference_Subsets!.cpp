#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    n = A.size();
    int sum = 0, min_dif = INT_MAX;
    for(int i=0; i<n; i++) sum+=A[i];
    bool dp[n+1][sum+1]; 
    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0 && j==0) dp[i][j] = true;
            else if(i==0) dp[i][j] = false;
            else if(j==0) dp[i][j] = true;
            else{
                dp[i][j] = dp[i-1][j];
                if(j>=A[i-1]) dp[i][j] = (dp[i-1][j-A[i-1]])? true: dp[i][j];
            }
            int k = 0;
            if(dp[i][j]){
                k = sum-j;
                min_dif = min(min_dif, abs(k-j));
            } 
        }
        
    }
    cout <<"Minimum Difference: "<< min_dif << endl;
    return 0;
}