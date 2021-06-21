#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// The i the elemnt of kth row is equal to the (i-1)th times (k-i-1)/i
// i.e the ith element of the row is the binomial cofficient nCr = nCr-1*(n-r+1)/r

int main(){
    int A;
    cin>>A;
    vector<int> B;
    int t=1;
    B.push_back(t);
    for(int i=1; i<A+1; i++){
        t = t*(A+1-i)/i; 
        B.push_back(t);
    }
    for (int i=0; i<A+1; i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
    return 0;
}