#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int n = A.length();
    stack<char> s;
    for(int i=0; i<n; i++){
        if(A[i]=='('){
            s.push('(');
        }else if(!s.empty() && A[i]==')'){
            s.pop();
        }else{
            cout << "Unbalanced Paranthesis!!"<<endl;
            return 0;
        }
    }
    if(s.empty()){
        cout << "Balanced Paranthesis!!"<<endl;
        return 1;
    }else{
        cout << "Unbalanced Paranthesis!!"<<endl;
        return 0;
    }
    
}