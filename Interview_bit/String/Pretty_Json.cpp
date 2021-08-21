#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    vector<string> ans;
    int n = A.length(), count = 0;
    string temp = "";
    for(int i=0; i<n; i++){
        if(A[i]=='{' || A[i]=='['){
            if(temp!="") ans.push_back(temp);
            temp = "";
            for(int i=0; i<count; i++) temp+="\t";
            temp+=A[i];
            ans.push_back(temp);
            count++;
            temp="";
            
        }else if(A[i]==' ') continue;
        else if(A[i]=='}' || A[i]==']'){
            if(temp!="") ans.push_back(temp);
            temp = "";
            count--;
            for(int i=0; i<count; i++) temp+="\t";
            temp+=A[i];
            if(i+1<n && A[i+1]==',') temp+=A[++i];
            ans.push_back(temp);
            temp="";
            //for(int i=0; i<count; i++) temp+="\t";
        }else{
            if(temp=="") for(int i=0; i<count; i++) temp+="\t";
            temp+=A[i];
            if(A[i]==','){
                ans.push_back(temp);
                temp="";
            }    
        }
    }
    for(auto i: ans) cout << i << "\n";
    return 0;
}