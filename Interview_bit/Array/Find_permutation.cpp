#include <bits/stdc++.h>
using namespace std;

int main(){

    string A;
    cin >> A;
    int B;
    cin >> B;
    int n = A.size(),a=1,b=B;
    vector<int> C;
    for(int i=0; i<n;i++){
        if(A[i] == 'I'){
            C.push_back(a);
            a++;
        }else{
            C.push_back(b);
            b--;
        }
    }
    if(a==b){
        C.push_back(a);
    }
    for(int i=0; i<B; i++){
        cout << C[i] << " ";
    }
    cout <<endl;

    return 0;
}