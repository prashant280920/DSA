#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t;
    cin>>n>>m;
    vector<int> A, B;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    for(int i=0; i<m; i++){
        cin >> t;
        B.push_back(t);
    }
    int i=0, j=0;
    n = A.size();
    m = B.size();
    vector<int> C;
    while(i<n && j<m){
        if(A[i]==B[j]){
            C.push_back(A[i]);
            i++;
            j++;
        }else if(A[i]<B[j]){
            i++;
        }else{
            j++;
        }
    }
    int k = C.size();
    for(int i=0; i<k; i++){
        cout << C[i]<<" ";
    }
    cout << endl;
    return 0;
}