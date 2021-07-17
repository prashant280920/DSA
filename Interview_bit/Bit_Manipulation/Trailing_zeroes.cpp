#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,a;
    cin >> A;
    int count = 0;
    a =A;
    while(!(a&1)){
        count++;
        a = a >> 1;
    }
    cout << "Method 1: O(log2(A)) Time complexiety"<<endl;
    cout << "Number of trailing zeroes in "<<A<<" are: "<<count<<endl;

    cout << "Method 2: O(1) Time complexiety"<<endl;
    count = log2(A^(A-1));
    cout << "Number of trailing zeroes in "<<A<<" are: "<<count<<endl;

    return 0;
}