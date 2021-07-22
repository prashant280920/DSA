#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    n = A.size();
    int start = 0, end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(mid == 0 || mid == n-1){
            cout << A[mid]<<endl;
            return 0;
        }else if(A[mid]>A[mid+1] && A[mid]>A[mid-1]){
            cout << A[mid]<<endl;
            return 0;
        }else if(A[mid]<A[mid+1] && A[mid]>A[mid-1]){
            start= mid+1;
        }else{
            end = mid-1;
        }
    }
    return 0;
}