#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<int> A, B;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    for(int i=0; i<n; i++){
        cin >> s;
        B.push_back(s);
    }
    int X=0, Y =0, min_step = 0;
    for(int i=1; i<A.size(); i++){
        X = abs(A[i] - A[i-1]);
        Y = abs(B[i] - B[i-1]);
        min_step += max(X,Y);
    }
    cout << min_step<< endl;
    return 0;
}