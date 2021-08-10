#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a,b;
    cin >> n;
    vector<vector<int>> A(n,vector<int>(2,0));
    for(int i=0; i<n; i++){
        cin >> a >> b;
        A[i][0] = a; A[i][1] = b;
    }
    n = A.size();
    int dp[n], omax=0;
    dp[0] = 1;
    for(int i=1; i<n; i++){
        int maxi = 0;
        for(int j=0; j<i; j++){
            if(A[i][0]>A[j][1]){
                maxi = max(maxi, dp[j]);
            }
        }
        dp[i] = maxi+1;
        omax = max(omax,dp[i]);
    }
    //if(omax==INT_MIN) omax = 0;
    cout << omax << endl;
    return 0;
}