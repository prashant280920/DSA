#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    getline(cin,A);
    int n = A.length();
    string c="",d="";
    for(int i=0; i<n; i++){
        if(isalnum(A[i])){
            if(A[i]>='A' && A[i]<='Z'){
                c+=(A[i]+32);
                d+=(A[i]+32);
            }else{
                c+=A[i];
                d+=A[i];
            }
        }
        
        
        
    }
    
    reverse(d.begin(),d.end());
    
    if(c==d){
        cout << A << " is Palindrome" << endl;
    }else{
        cout << A << " is not a Palindrome" << endl;
    }
    return 0;
}