#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> c;
        A.push_back(c);
    }
    int res=0;
    n = A.size();
    for(int i=0; i<n; i++){
        if(((i+1)*(n-i))%2==1){
            res^=A[i];
        }
    }
    cout <<  res <<endl;
    return 0;
}