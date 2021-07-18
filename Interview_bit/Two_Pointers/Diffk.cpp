#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    int B;
    cin >> B;
    n = A.size();
    int start = 0, end = 0;
    while(start<n && end<n){
        if(A[end]-A[start] == B && start!=end){
            cout << 1<<endl;
            return 1;
        }else if(A[end]-A[start]<B){
            end++;
        }else{
            start++;
        }
    }
    cout <<0<<endl;
    return 0;
}