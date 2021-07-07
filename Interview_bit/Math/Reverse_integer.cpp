#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    int n = A;
    long long ans = 0;
    while(n){
        ans=(ans*10+n%10);
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        n /= 10;
        
    }
    cout << ans << endl;
    return 0;
}