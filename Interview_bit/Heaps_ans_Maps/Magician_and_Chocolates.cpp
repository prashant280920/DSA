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
    for(long int i=0; i<n; i++) q.push(A[i]);
    
    long int ans = 0;
    for(long int i=0; i<B; i++){
        ans+=(q.top()%1000000007);
        ans%=1000000007;
        q.push(q.top()/2);
        q.pop();
    }
    cout << ans << endl;
    return 0;
}