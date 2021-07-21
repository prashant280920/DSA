#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;

    if(A=="/"){
        cout << "/\n";
        return 0;
    }
    stack<string> ans;
    int n = A.length();
    string c = "";
    for(int i=0; i<n; i++){
        if(A[i]=='/'){
            continue;
        }
        c = "";
        while(i<n && A[i]!='/'){
            c+=A[i];
            i++;
        }
        //cout << c<<"\n";
        if(c=="."){
            continue;
        }
        else if(c==".."){
            if(!ans.empty()){
                ans.pop();
            }
        }
        else if(c.length()!=0){
            ans.push(c);
        }
    }

    stack<string> ans1;
    while(!ans.empty()){
        ans1.push(ans.top());
        ans.pop();
    }
    string t = "/";
    while(!ans1.empty()){
        if(ans1.size()!=1){
            t+=(ans1.top()+"/");
        }else{
            t+=ans1.top();
        }
        ans1.pop();
    }
    cout << t << endl;
    
    return 0;
}