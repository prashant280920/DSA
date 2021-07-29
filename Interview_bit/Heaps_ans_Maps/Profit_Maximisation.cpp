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
    n = A.size();
    priority_queue<int> q;
    for(int i=0; i<n; i++) q.push(A[i]);
    int ans = 0;
    for(int i=0; i<B; i++){
        ans+=q.top();
        q.push(q.top()-1);
        q.pop();
    }
    cout << ans << endl;
    return 0;
}