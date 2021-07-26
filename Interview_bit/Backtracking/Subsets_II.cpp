#include<bits/stdc++.h>
using namespace std;


void subsetDupUtil(vector<int> &A, int start, vector<int> &temp, vector<vector<int>> &ans){
    int n = A.size();
    if(start == n){
      //  cout << temp.size();
        ans.push_back(temp);
        return;
    }
    
    temp.push_back(A[start]);
    subsetDupUtil(A,start+1, temp, ans);
    temp.pop_back();
    subsetDupUtil(A,start+1,temp,ans);
}


int main(){
    int n,t;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    sort(A.begin(), A.end());
    vector<int> temp = {};
    vector<vector<int>> ans;
    subsetDupUtil(A,0,temp, ans);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << "[";
        int j=0,k=ans[i].size();
        for(; j<(k-1); j++){
            cout << ans[i][j]<<" ";
        }
        if(k==0){
            cout <<"]\n";
        }else{
          cout<<ans[i][j] <<"]\n";  
        }
       ;
    }


    return 0;
}