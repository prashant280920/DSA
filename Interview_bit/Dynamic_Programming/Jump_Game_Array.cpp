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
    int n = A.size();
    vector<bool> dp (n, false);
    dp[0] = true;
    for(int i=0; i<n-1; i++){
        if(dp[i]){
            for(int j=1; j<=A[i]; j++){
                if( j+i<n &&!dp[j+i] ) dp[j+i] = true;
            }
        }
        
        if(dp[n-1]){
            cout << 1 << endl;
            return 1;
        }
    }
    if(dp[n-1]){
        cout << 1 << endl;
        return 1; 
    } 
    else{
        cout << 0 << endl;
        return 0;
    }
    return 0;
}