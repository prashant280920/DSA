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
    unordered_map<int,int> s;
    int mini=INT_MAX;
    n = A.size();
    for(int i=0; i<n; i++){
        if(s.find(A[i])!=s.end()){
            mini = min(mini, s[A[i]]);
        }else{
            s.insert({A[i],i});
        }
    }
    if(mini == INT_MAX) return -1;
    return A[mini];
    return 0;
}