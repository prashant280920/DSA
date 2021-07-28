#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int n = A.size();
    unordered_map<char,int> m;
    int start = 0, max_len = 0;
    for(int i=0; i<n; i++){
        if(m.find(A[i])!=m.end()){
            if(start<=m[A[i]]){
                //cout << start<<" "<< i<<"\n";
                if(max_len < i-start) max_len = i-start;
                start = m[A[i]]+1;
                m[A[i]] = i;
            }else m[A[i]] = i;
        }else{
            m[A[i]] = i;
        }
    }
    //cout << start;
    if(start<n){
        if(max_len<n-start) max_len = n-start;
    }
    cout << max_len << endl;
    return 0;
}