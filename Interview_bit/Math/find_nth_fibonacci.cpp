#include<bits/stdc++.h>
using namespace std;

vector<long> multiply(vector<long> A, vector<long> B){
    vector<long> ans(4);
    for(int i=0; i<=3; i++){
        A[i] %= 1000000007;
        B[i] %= 1000000007;
    }
    ans[0] = ((A[0]*B[0])%1000000007 + (A[1]*B[2])%1000000007)%1000000007;
    ans[1] = ((A[0]*B[1])%1000000007 + (A[1]*B[3])%1000000007)%1000000007;
    ans[2] = ((A[2]*B[0])%1000000007 + (A[3]*B[2])%1000000007)%1000000007;
    ans[3] = ((A[2]*B[1])%1000000007 + (A[3]*B[3])%1000000007)%1000000007;
    return ans;
}

vector<long> power(long n){
    
    vector<long> F = {1,1,1,0};
    if(n==1) return F;
    vector<long> B = power(n/2);
    if(n%2==0){
        return multiply(B,B);
    }else{
        return multiply(multiply(B,B), F);
    }
}

int main(){
    int A;
    cin >> A;
    if(A<=2){
        cout << 1 << endl;
        return 0;
    }
    vector<long> ans = power(A-1);
    cout << ans[0]%1000000007 << endl;
    return 0;
}