#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    n = A.size();
    long long int maxi = A[0], mini = A[0], prod=A[0];
    for(int i=1; i<n; i++){
        if(A[i]<0) swap(maxi,mini);
        maxi = max((long long int)A[i],maxi*A[i]);
        mini = min((long long int)A[i],mini*A[i]);
        if(maxi>prod) prod = maxi;
    }
    cout << "Max Product Subarray: "<<  prod << endl;
    return 0;
}