#include <bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int ans = 0;
    int n = A.length();
    for(int i=0; i<n; i++){
        ans+=pow(26,i)*(A[n-i-1]-64);
    }
    cout << ans<<endl;
    return 0;
}