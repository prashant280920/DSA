#include<bits/stdc++.h>
using namespace std;

#define ll long long int
void createSubset(vector<int> &A, int index, vector<vector<int>> &ans, vector<int> t){
    ll n = A.size();
    if(n == index){
        ans.push_back(t);
        return;
    }
    // for(int i=0; i<t.size(); i++){
    //     cout << t[i]<<" ";
    // }
    cout << "\n";
    createSubset(A, index+1, ans,t);
    t.push_back(A[index]);
    createSubset(A, index+1, ans,t);
        
}

int main(){
    
    int n,l;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> l;
        A.push_back(l);
    }

    vector<vector<int>> ans;
    vector<int> t = {};
    sort(A.begin(), A.end());
    createSubset(A,0,ans,t);
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}