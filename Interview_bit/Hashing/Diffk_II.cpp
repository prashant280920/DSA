#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    unordered_map<int,int> m;
    n = A.size();
    for(int i=0; i<n; i++){
        if(m.find(B+A[i])!=m.end()){
            cout << 1<< endl;
            return 1;
        }else if(m.find(A[i]-B)!=m.end()){
            cout << 1<< endl;
            return 1;
        }
        m[A[i]] = i;
    }
    cout << 0 << endl;
    return 0;
}