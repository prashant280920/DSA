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
    int m=0,j=0,k=0;
    n = A.size();
    for(int i=0; i<n; i++){
        if(A[i]==0) m++;
        if(A[i]==1) j++;
        if(A[i]==2) k++;
        
    }
    int i=0;
    while(m){
        A[i]=0;
        m--;
        i++;
    }
    while(j){
        A[i]=1;
        j--;
        i++;
    }
    while(k){
        A[i]=2;
        k--;
        i++;
    }
    for(int i=0; i<n; i++){
        cout << A[i]<<" ";
    }
    cout << endl;
    return 0;
}