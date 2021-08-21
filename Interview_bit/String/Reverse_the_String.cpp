#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    getline(cin, A);
    stringstream ss(A);
    int n = A.length();
    vector<string> B;
    string word;
    while(ss>>word) B.push_back(word);
    reverse(B.begin(), B.end());
    string ans = "";
    n = B.size();
    for(int i=0; i<n-1; i++) ans+=(B[i]+" ");
    ans+=B[n-1];
    cout << ans << endl;
    return 0;
}
