#include<bits/stdc++.h>
using namespace std;

void paranUtil(int n, int open, int close, string str, vector<string>& ans)
{
    if (close == n){
        ans.push_back(str);
        return;
    }
    else
    {
        if (open < n){ 
            str += '(';
            paranUtil(n, open+1, close, str, ans);
            str.pop_back();
        }
        if (open > close){
            str += ')';
            paranUtil(n, open, close+1, str, ans);
            str.pop_back();
        }
    }
}


int main(){
    int A;
    cin >> A;
    vector<string> ans;
    
    if (A>0) paranUtil(A, 0, 0, "", ans);
    //return ans;
    for(auto i: ans) cout<<i<<"\n"; 
    return 0;
}