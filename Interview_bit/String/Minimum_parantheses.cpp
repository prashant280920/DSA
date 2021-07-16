#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int a=0, count=0;
    int n = A.length();
    for(int i=0; i<n; i++){
        if(A[i]=='('){
            a++;
        }else{
            a--;
        }
        if(a<0){
            count++;
            a=0;
        }
    }

    cout << "Minimum No. of parantheses we must add in \""<<A<<"\" are: "<< count+a<<endl;
    return 0;
}