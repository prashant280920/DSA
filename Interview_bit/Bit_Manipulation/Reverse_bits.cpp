#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int A,B=0;
    cin >> A;
    
    for(int i=0; i<32; i++){
        B = B<<1;
        B = B|(A&1);
        A = A>>1;
    }
    cout << B << endl;
    return 0;
}