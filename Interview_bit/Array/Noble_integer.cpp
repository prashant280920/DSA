#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// First we sort the input array in descending order.

//Now, all we have to do is to traverse through each element of the array
// and check whether the ith element == A[i]

int solve(vector<int> &A) {
    sort(A.begin(),A.end(),greater <>());
    int s = A.size();
    for (int i=0; i<s; i++){
        if(A[i] == i && A[i-1]!=A[i] && i!=0){        
            return 1;
        }
        if(i==0 && A[i]==0){
            return 1;
        }
    }
    return -1;
}

int main(){
    int A,t;
    cin>>A;
    vector<int> B;
    for(int i=0; i<A; i++){
        cin>>t;
        B.push_back(t);
    }
    
    cout<< solve(B)<<endl;;
    return 0;
}