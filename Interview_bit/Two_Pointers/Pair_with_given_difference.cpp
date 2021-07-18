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
    sort(A.begin(),A.end());
    n = A.size();
    int start = 0, end = 0;
    while(end<n && start<n){
        if(A[end]-A[start]==B && start!=end){
            cout << 1 <<endl;
            return 1;
        }else if(A[end]-A[start]<B){
            end++;
        }else{
            start++;
        }
    }
    cout << 0 <<endl;
    return 0;
}