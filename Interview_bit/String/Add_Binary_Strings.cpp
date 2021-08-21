#include<bits/stdc++.h>
using namespace std;

string addBinary(string A, string B) {
    int n = A.size(), m = B.size();
    if(n>m) return addBinary(B, A);
    string ans;
    int c = 0;
    int j = m-1;
    for(int i=n-1; i>=0; i--){
        int a = A[i]-'0';
        int b = B[j]-'0';
        j--;
        int sum = a+b+c;
        ans+=to_string(sum%2);
        c = sum/2;
    }
    for(int i=j; i>=0; i--){
        int b = B[i]-'0';
        int sum = b+c;
        ans+=to_string(sum%2);
        c = sum/2;
    }
    if(c==1) ans+='1';
    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){
    string A, B;
    cin >> A >> B;
    cout << addBinary(A, B) << endl;
    return 0;

}