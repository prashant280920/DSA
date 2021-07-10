#include<bits/stdc++.h>
using namespace std;

int mian(){
    int A,B;
    cin >> A>> B;
    int m=A,n=B,path = 1;
    for (int i = n; i < (m + n - 1); i++) {
        path *= i;
        path /= (i - n + 1);
    }
    cout << "Total possible routes: " << path << endl;
    return 0;
}