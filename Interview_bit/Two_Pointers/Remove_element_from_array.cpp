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
    cin >> B;
    int j=0;
    n = A.size();
    for(int i=0; i<n; i++){
        if(A[i]!=B){
            A[j]=A[i];
            j++;
        }
    }
    if(j<n){
        A.erase(A.begin()+j, A.end());
    }
    cout << "Length of New array is: "<< j<<"\n";
    for(int i=0; i<j; i++){
        cout << A[i]<<" ";
    }
    cout << endl;
    return 0;
}