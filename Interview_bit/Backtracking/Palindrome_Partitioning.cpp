#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string a){
    int n = a.length();
    int l = 0, r = n-1;
    while(l<r){
        if(a[l]!=a[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}


void palindromeParition(string &A,int start, vector<vector<string>> &ans, vector<string> &temp){
    int n = A.length();
    if(start>=n){
        ans.push_back(temp);
        return;
    }
    for(int i=start; i<n; i++){
        string t = A.substr(start, i-start+1);
        if(isPalindrome(t)){
            temp.push_back(t);
            palindromeParition(A, i+1, ans, temp);
            temp.pop_back();
        }
    }
}

int main(){
    string A;
    cin >> A;
    vector<vector<string>> ans;
    vector<string> temp;
    palindromeParition(A,0,ans,temp);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout <<"\n";
    }
    return 0;
}