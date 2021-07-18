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
    n = A.size(), m = B.size();
    int i=0, j=0;
    vector<int> C;
    while(i<n && j<m){
        if(A[i]<=B[j]){
            C.push_back(A[i]);
            i++;
        }else{
            C.push_back(B[j]);
            j++;
        }
        cout << i << " "<< j<<"\n";
    }
    if(i<n){
        for(int k=i; k<n; k++){
            C.push_back(A[i]);
        }
    }
    if(j<m){
        for(int k=j; k<m; k++){
            C.push_back(B[k]);
        }
    }
    int l = C.size();
    t=0;
    for(int k=0; k<l; k++){
        cout << C[k]<<" ";
    }
    cout << "\n";
    for(int k =0; k<n; k++){
        A[k] = C[t];
        t++;
    }
    for(int k=t; k<l; k++){
        A.push_back(C[k]);
    }
    for(int k=0; k<l; k++){
        cout << A[k]<<" ";
    }
    cout << "\n";
    return 0;
}