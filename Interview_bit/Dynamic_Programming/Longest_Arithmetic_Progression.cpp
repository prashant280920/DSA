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
    
    n = A.size(); 	
	unordered_map<int, unordered_map<int, int>> dp;
   
	if(n==0 || n==1){
        cout << 1 << endl;
        return 1;
    } 
    int ans = 2;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			int d = A[j] - A[i];
			//cout << dp[d].count(i)<<" ";
			dp[d][j] = dp[d].count(i) ? dp[d][i] + 1 : 2;
			ans = max(ans, dp[d][j]);
		}
	}
	cout << ans << endl;
    return 0;
}