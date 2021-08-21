#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n ;i++){
        cin >> B;
        A.push_back(B);
    }
    n= A.size();
    vector<pair<int,int>> p;
    for(int i=0; i<n; i++) p.push_back(make_pair(A[i],i));
    sort(p.begin(), p.end());
    int rmax = p[n-1].second;
    int ans = 0;
    for(int i=n-2; i>=0; i--){
        ans=max(ans, rmax-p[i].second);
        rmax = max(rmax, p[i].second);
    }
    cout << "Max Distance: "<< ans << endl;
    return 0;
}