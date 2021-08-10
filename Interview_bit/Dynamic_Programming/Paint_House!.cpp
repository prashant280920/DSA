#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    vector<vector<int>> A(n, vector<int> (3,0));
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        A[i][0] = a; A[i][1] = b; A[i][2] = c; 
    }
    n = A.size();
    for(int i=1; i<n; i++){
        A[i][0] += min(A[i-1][1],A[i-1][2]);
        A[i][1] += min(A[i-1][0],A[i-1][2]);
        A[i][2] += min(A[i-1][1],A[i-1][0]);
    }
    cout << min(A[n-1][0], min(A[n-1][1],A[n-1][2])) << endl;
    return 0;
}