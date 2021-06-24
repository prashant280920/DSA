#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t,n;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>t;A.push_back(t);
    }

    n = A.size();
    for(int i=0; i<n; i++){
        if(A[i]>0 && A[i]<=n){
            if(A[i]!=(A[A[i]-1])){
                swap(A[i],A[A[i]-1]);
                i--;
            }
        }
    }
    

    for(int i=0; i<n; i++){
        if (A[i]!=i+1 ){
            cout<< i+1<<endl;
            return 0;
        }

    }

    
}