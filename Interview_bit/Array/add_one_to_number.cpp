#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,n;
    cin >>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>k;A.push_back(k);
    }
    n= A.size();
    A[n-1]++;
    int c = A[n-1]/10;
    A[n-1] = A[n-1]%10;
    for(int i=n-2; i>=0; i--){
        if(c==1){
            A[i]++;
            c = A[i]/10;
            A[i] = A[i]%10;
        }
    }
   
    
    if(c == 1){
        A.insert(A.begin(), 1);
    }
    while(A[0]==0){
        A.erase(A.begin());
    }
    for(int i=0; i<A.size();i++){
        cout << A[i]<< " ";
    }
    cout << endl;
    return 0;
}