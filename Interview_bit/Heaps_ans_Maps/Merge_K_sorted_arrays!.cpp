#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,B;
    cin >> n >> m;
    vector<vector<int>> A;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            cin >> B;
            temp.push_back(B);
        }
        A.push_back(temp);
    }
    priority_queue<int, vector<int> , greater<int>> p;
    n = A.size();
    for(int i=0; i<n; i++){
        m = A[i].size();
        for(int j=0; j<m; j++) p.push(A[i][j]);
    }
    vector<int> ans;
    while(!p.empty()){
        ans.push_back(p.top());
        p.pop();
    }
    for(auto i: ans) cout << i << " ";
    cout << endl;
    return 0;
}