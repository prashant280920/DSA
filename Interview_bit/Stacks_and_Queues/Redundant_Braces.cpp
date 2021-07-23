#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    stack<char> s;
    for(auto ch: A){
        bool operator_present = false;
        if(ch == ')'){
            if(s.empty()){
                cout << 1<< endl;
                return 1;
            }else{
                if(s.top()=='('){
                    cout << 1 << endl;
                    return 1;
                }else{
                    while(!s.empty() && s.top()!='('){
                        char tp = s.top();
                        if(tp =='+' || tp =='*' || tp =='/' || tp =='-') operator_present=true;
                        s.pop();
                    }
                    s.pop();
                    if(!operator_present){
                        cout << 1<< endl;
                        return 1;
                    }
                }
            }
        }else{
            s.push(ch);
        }
    }
    cout << 0 << endl;
    return 0;
}