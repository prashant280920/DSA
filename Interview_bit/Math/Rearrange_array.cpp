#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }

    n = A.size();
    for(int i=0; i<n; i++){
        A[i]+=((A[A[i]]%n)*n);
    }
    for(int i=0; i<n; i++){
        A[i] = A[i]/n;
    }
    cout << "Output: ";
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}