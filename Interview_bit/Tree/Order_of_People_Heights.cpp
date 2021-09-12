#include <bits/stdc++.h>
using namespace std;
vector<int> Height_order(vector<int> &A, vector<int> &B) {
    map<int,int,greater<int>> mp;
    for(int i=0;i<A.size();i++){
        mp.insert({A[i],B[i]});
    }
    vector<int> res;
    for(auto i=mp.begin();i!=mp.end();i++){
        res.insert(res.begin()+i->second,i->first);
    }
    return res;
}
int main()
{
    int n; cin >> n;
    vector<int> A(n,0);
    vector<int> B(n,0);
    for(int i=0; i<n; i++){
        cin >> A[i];
    } 
    for(int i=0; i<n; i++){
        cin >> B[i];
    } 
    vector<int> ans = Height_order(A,B);
    for(int i=0; i<n; i++){
        cout << ans[i]<<" ";
    }
    cout <<endl;
    return 0;
}
