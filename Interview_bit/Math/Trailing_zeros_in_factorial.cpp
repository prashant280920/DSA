#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    int i=5,count = 0;
    while(A/i){
        count += A/i;
        i = i*5;
    }
    cout << "Number of zeroes in "<<A<<"! are: "<< count<<endl;
    return 0;
}