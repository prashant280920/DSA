#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if(B>A){
        swap(A,B);
    }
    while(B){
        
        A = A%B;
        swap(A,B);
    }
    cout << A << endl;
    return 0;
}