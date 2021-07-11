#include<bits/stdc++.h>
using namespace std;



int main(){
    int A,B;
    cin >> A >> B;
    while(__gcd(A,B)!=1){
        A = A/__gcd(A,B);
    }
    cout << A << endl;
    return 0;
}