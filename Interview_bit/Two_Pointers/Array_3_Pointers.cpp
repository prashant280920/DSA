#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m , l, s;
    cin >> n;
    vector<int> A, B, C;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> s;
        B.push_back(s);
    }
    cin >> l;
    for(int i=0; i<l; i++){
        cin >> s;
        C.push_back(s);
    }
    n = A.size(), m = B.size(), l = C.size();
    int diff = INT_MAX;
    int i=0, j = 0, k= 0;
    while(i<n && j<m && k<l){
        int mini = min(A[i], min(B[j], C[k]));
        int maxi = max(A[i], max(B[j], C[k]));
        diff = min(diff, maxi-mini);
        if(A[i]==mini) i++;
        else if(B[j]==mini) j++;
        else k++;
    } 
    cout << diff << endl;
    return 0;
}