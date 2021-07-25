#include<bits/stdc++.h>
using namespace std;


void Permutation(vector<int> &A, int index, vector<vector<int>> &ans){
    int n = A.size();
    if(index == n){
        ans.push_back(A);
        return;
    }

    for(int i=index; i<n; i++){
        swap(A[index], A[i]);
        Permutation(A, index+1, ans);
        swap(A[index],A[i]);
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
    vector<vector<int>> ans;
    Permutation(A,0,ans);
    
    for(int i=0; i<ans.size(); i++){
        cout << "[";
        int j=0;
        for(; j<ans[i].size()-1; j++){
            cout << ans[i][j]<<",";
        }
        cout << ans[i][j]<<"]\n";
    }
    return 0;
}