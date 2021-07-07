#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    int ans=0, n=A;
    while(n>0){
        int rem = n%10;
        ans+=(rem);
        ans*=10;
        n/=10;
    }
    ans/=10;
    if(ans==A){
        cout << "Palindrome"<<endl;
        return 0;
    } 
    cout << "Not A Palindrome"<<endl;
    return 0;
}