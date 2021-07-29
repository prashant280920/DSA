#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,C;
    cin >> n;
    vector<int> A,B;
    for(int i=0; i<n; i++){
        cin >> C;
        A.push_back(C);
    }
    for(int i=0; i<n; i++){
        cin >> C;
        B.push_back(C);
    }
    cin >> C;
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    n = A.size();
    priority_queue<int, vector<int>, greater<int>> q; 
    vector<int> ans;
    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++){
            if(q.size()<C) q.push(A[i]+B[j]);
            else{
                if(A[i]+B[j]<q.top()) break;
                else{
                    q.push(A[i]+B[j]);
                    q.pop();
                }
            }
        }
    }
    while(!q.empty()){
        ans.push_back(q.top());
        q.pop();
    }
    reverse(ans.begin(),ans.end());
    for(auto i : ans) cout << i<< " ";
    cout << endl;
    return 0;
}