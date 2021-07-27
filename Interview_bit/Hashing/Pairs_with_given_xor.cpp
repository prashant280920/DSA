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

    unordered_set<int> s;
    int count = 0;
    n = A.size();
    for(int i=0; i<n; i++){
        if(s.find(A[i]^B)!=s.end()){
            count++;
        }else{
            s.insert(A[i]);
        }
    }
    cout << count<< endl;
    return 0;
}