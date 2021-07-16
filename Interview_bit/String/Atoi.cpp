#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    getline(cin, A);
    int n = A.length();
    int i=0;
    while(A[i]==' '){
        i++;
    }
    long long int num=0, neg=0;
    for(; i<n; i++){
        if(A[i]=='-'){
            neg=1;
        }else if(A[i]=='+'){
            neg=0;
        }
        else if(A[i]>='0' && A[i]<='9'){
            int a = A[i]-48;
            num+=a;
            num*=10;
        }
        else {
            break;
        }
       // cout << num<<" ";
    }
    num/=10;
    if(neg){
        num*=(-1);
    }
    if(num>INT_MAX){
        num = INT_MAX;
    }
    if(num<INT_MIN){
        num = INT_MIN;
    }
    cout << num << endl;

    return 0;
}