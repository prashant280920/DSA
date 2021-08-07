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
    bool dp[n+1][B+1];
    for(int i=0; i<n+1; i++){
        for(int j=0; j<B+1; j++){
            if(i==0 && j==0) dp[i][j] = true;
            else if(i==0) dp[i][j] = false;
            else if(j==0) dp[i][j] = true;
            else{
                dp[i][j] = dp[i-1][j];
                if(j>=A[i-1]){
                    dp[i][j] = (dp[i-1][j-A[i-1]])? true: dp[i][j];
                }
            } 
            //cout << dp[i][j] << " ";
        }
        //cout << "\n";
    }
    cout << dp[n][B] << endl;
    return 0;
}