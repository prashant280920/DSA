#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    string ans="", s = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
    int t=0, n = A;
    while(n>0){
        t = n%26;
        ans += s[t];
        if(t!=0){
            n /= 26;
        }else{
            n = n/26 - 1 ;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}