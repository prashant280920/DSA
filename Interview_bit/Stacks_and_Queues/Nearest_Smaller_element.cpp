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
    n = A.size();
    vector<int> G;
    stack<int> s;
    for(int i=0; i<n; i++){
        if(s.empty()){
            G.push_back(-1);
            s.push(A[i]);
            continue;
        }else{
            if(s.top()<A[i]){
                G.push_back(s.top());
            }else{
                while(!s.empty() && s.top()>=A[i] ){
                    s.pop();
                }
                if(s.empty()){
                    G.push_back(-1);
                }else{
                    G.push_back(s.top());
                }
                
            }
            s.push(A[i]);
        }

    }
    cout << "G: ";
    for(int i=0; i<n; i++){
        cout << G[i]<<" ";
    }
    cout << endl;
    return 0;
}