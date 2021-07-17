#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> c;
        A.push_back(c);
    }
    sort(A.begin(),A.end());
    n = A.size();
    int mini = A[0]^A[1];
    for(int i=1; i<n; i++){
        mini = min(A[i-1]^A[i],mini);
    }
    cout << "Minimum Xor: "<< mini <<endl;
    return 0;
}