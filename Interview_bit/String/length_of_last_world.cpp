#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    getline(cin,A);
    int n = A.length(),count=0, flag=0;
    for(int i=n-1; i>=0; i--){
        if(A[i]==' ' && flag==1){
            break;
        }
        if(A[i]==' ' && flag==0){
            continue;
        }
        flag =1;
        count++;
    }
    cout << "Length of last word: "<<count << endl;
    return 0;
}