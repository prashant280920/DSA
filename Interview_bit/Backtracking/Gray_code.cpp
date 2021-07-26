#include<bits/stdc++.h>
using namespace std;

void GrayCodeUtil(int A, vector<int> &ans ){
    
    if(A==1){
        ans.push_back(0);
        ans.push_back(1);
        return;
    }
    GrayCodeUtil(A-1,ans);
    int n = ans.size();
    int t = 1, k=log2(n);
    t <<= k;
    for(int i=n-1; i>=0; i--){
        ans.push_back(t+ans[i]);
    }
}


int main(){
    int A;
    cin >> A;
    vector<int> ans;
    GrayCodeUtil(A,ans);
    for(auto i: ans) cout << i<<" ";
    cout << endl;
    return 0;
}