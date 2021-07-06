#include <bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    if(A==1){
        cout << "Possible!!!" << endl;
        return 1;
    }
    for(int i=2; i*i<=A; i++){
        double P = log(A)/log(i);
        if(P-(int)P <0.0000001){
            cout << "Possible!!!" << endl;
            return 1;
        }
    }
    cout << "Not Possible!!!" << endl;
    return 0;
}