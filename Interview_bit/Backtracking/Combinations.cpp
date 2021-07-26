#include<bits/stdc++.h>
using namespace std;

void combUtil(int A, int B,int n, vector<int> &temp, vector<vector<int>> &ans){
    if(B==0){
        ans.push_back(temp);
        return;
    }
    if(n>A){
        return;
    }
        temp.push_back(n);
        combUtil(A,B-1,n+1,temp,ans);
        temp.pop_back();
        combUtil(A,B,n+1,temp,ans);
    
}


int main(){
    int A, B;
    cin >> A >> B;
    vector<vector<int>> ans;
    vector<int> temp = {};
    combUtil(A,B,1,temp,ans);
    // sort(ans.begin(),ans.end());
    // ans.erase(unique(ans.begin(), ans.end()), ans.end());

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout <<"\n";
    }
    
    return 0;
}