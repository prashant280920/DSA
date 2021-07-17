#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int A,a;
    cin >> A;
    a=A;
    int count = 0;
    while(a){
        a = a&(a-1);
        count++;
    }
    cout << "No. of 1 bits in "<<A<<" are: "<<count<<endl;
    return 0;
}