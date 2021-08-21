#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    
    // This approach is uding Dynamic Programing that takes
    // O(n^2) time Complexity and O(n^2) space

    // There is another approach which will take O(n^2) time without extra space
    // this solution approach you can see in interviewbit.

    int n = A.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int start = 0, end = 0;
    for(int gap = 0; gap<n; gap++){
        bool flag = false;
        for(int i=0, j = gap; j<n; i++, j++){
            if(gap==0) dp[i][j] = true;
            else if(gap==1){
                if(A[i]==A[i+1]){
                    dp[i][j] = true;
                }
            }else{
                if(A[i]==A[j]){
                    dp[i][j] = dp[i+1][j-1];
                }
            }
            if(dp[i][j] && !flag){
                flag = true;
                start = i;
                end = j;
            }
        }
    }
    cout << A.substr(start, end-start+1) << endl;
    string a="\t", b = "";
    if(a==b) cout << "yes";
    return 0;
}