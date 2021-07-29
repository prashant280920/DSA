#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    priority_queue<int> q;
    n = A.size();
    for(int i=0; i<n ; i++) q.push(A[i]);
    vector<int> ans;
    for(int i=0; i<B; i++){
        ans.push_back(q.top());
        q.pop();
    }
    
    for(auto i: ans) cout << i << " ";
    cout << endl;
    return 0;
}