#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    vector<string> A;
    for(int i=0; i<n; i++){
        cin >> s; A.push_back(s);
    }
    stack<string> operators;
    stack<int> number;
    n = A.size();
    for(int i=0; i<n; i++){
        if(A[i]=="*" || A[i]=="/" || A[i]=="+" || A[i]=="-"){
            int second = number.top();
            number.pop();
            int first = number.top();
            number.pop();
                if(A[i]=="*") first = first*second;
                if(A[i]=="+") first = first+second;
                if(A[i]=="-") first = first-second;
                if(A[i]=="/") first = first/second;
                number.push(first);
        }
        else{
            int myint = stoi(A[i]);
            number.push(myint);
            
        }
    }
   

    cout <<  number.top()<<endl;
    return 0;
}