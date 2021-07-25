#include<bits/stdc++.h>
using namespace std;


void SumUtil(vector<int> &A, int B, int sum, vector<int> &temp, vector<vector<int>> &ans){
    int n = A.size();
    if(sum>B){
        return;
    }else if(sum==B){
        vector<int> d = temp;
        sort(d.begin(),d.end());
        ans.push_back(d);
       // cout << A[start];
        return;
    }
    
    for(int i=0; i<n; i++){
        if(A[i]>B) break;
        temp.push_back(A[i]);
        
        SumUtil(A,B,sum+A[i],temp,ans);
        temp.pop_back();
    }
}

int main(){
    int n,t;
    cin >> n;
    vector<int> A;
    
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    int B;
    cin >> B; 
    
    sort(A.begin(),A.end());
    vector<int> temp;
    vector<vector<int>> ans;
    SumUtil(A,B,0,temp,ans);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    //return ans;

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout <<"\n";
    }
    //cout << ans.size();
    return 0;
}