#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// First sort the input array, then swap all adjacent elements.


int main(){
    int n,t;
    cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>t;
        A.push_back(t);
    }
    sort(A.begin(),A.end());
    int j = 0;
    for(int i=0; i<n; i=i+2){
        j=i+1;
        if(j<n){
            swap(A[i],A[i+1]);
        }
        
    }
    for(int i =0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}