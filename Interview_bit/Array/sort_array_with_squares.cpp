#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>s;A.push_back(s);
    }
    n = A.size();
    int neg_pos = 0;
    for(int i=0; i<n;i++){
        if(A[i]>=0){
            neg_pos = i-1;
            break;
        }
    }
    vector<int> B,C;
    if(neg_pos>=0){
        for(int i=neg_pos; i>=0; i--){
            B.push_back(A[i]*A[i]);
        }
    }
   
    for(int i=neg_pos+1; i<n; i++){
        C.push_back(A[i]*A[i]);
    }

    vector<int> D(n);
    merge(B.begin(),B.end(),C.begin(),C.end(),D.begin());
    for(int i=0; i<n; i++){
        cout << D[i]<< " ";
    }
    cout << endl;
    return 0;
}