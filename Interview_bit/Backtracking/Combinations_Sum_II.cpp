#include<bits/stdc++.h>
using namespace std;

void sumUntil(vector<int> &A, int B, int sum, int index, vector<vector<int>> &ans, vector<int> &temp){
    if(sum>B){
        return;
    }else if(sum==B){
        ans.push_back(temp);
        return;
    }

    for(int i=index; i<A.size(); i++){
        temp.push_back(A[i]);
        sumUntil(A,B,sum+A[i],i+1,ans,temp);
        temp.pop_back();
    }
}

int main(){
    int n,B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    vector<int> temp;
    sumUntil(A,B,0,0,ans,temp);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout <<"\n";
    }
    return 0;
}