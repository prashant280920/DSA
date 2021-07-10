#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int n = A.length(),small=-1,big=-1;
    for(int i=n-1; i>0; i--){
        if(A[i-1]<A[i]){
            small = i-1;
            big = i;
            break; 
        }
    }
    if(big==-1){
        cout << "A is already larger possible number" << endl;
        return -1;
    }
    int temp =-1;
    for(int i=n-1; i>=small; i--){
        if(A[i]>A[small]){
            temp = i;
            break;
        }
    }

    swap(A[temp],A[small]);
    sort(A.begin()+big,A.end());
    cout << A << endl;
    return 0;
}