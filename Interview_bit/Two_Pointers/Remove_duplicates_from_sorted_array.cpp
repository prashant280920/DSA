#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,B;
    cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    n = A.size();
    int j=0;
    for(int i=0; i<n-1; i++){
        if(A[i]!=A[i+1]){
            A[j] = A[i];
            j++;
        }
    }
    A[j] = A[n-1];
    j++;
    if(j<n){
        A.erase(A.begin()+j,A.end());
    }
    
    cout << "Length of New array is: "<< j<<"\n";
    for(int i=0; i<j; i++){
        cout << A[i]<<" ";
    }
    cout << endl;
    return 0;
}