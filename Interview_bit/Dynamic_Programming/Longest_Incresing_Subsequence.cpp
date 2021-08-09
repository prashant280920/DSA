#include<bits/stdc++.h>
using namespace std;

// O(Nlog2N) solution
int main(){
    int n,s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    vector<int> B;
    n = A.size();
    B.push_back(A[0]);
    for(int i=1; i<n; i++){
        int m = B.size();
        if(B[m-1]<A[i]){
            B.push_back(A[i]);
        }else{
            auto it = lower_bound(B.begin(),B.end(), A[i])-B.begin();
            //cout << it << " " << i << "\n";
            B[it] = A[i];
        }
    }
    cout << B.size()<<endl;

    return 0;
}