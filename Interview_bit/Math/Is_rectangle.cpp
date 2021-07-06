#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
     if((A==B && C==D ) || (A==C && B==D ) || (A==D && C==B )){
        cout << "Rectangle is Possible"<<endl;
        return 0;
    }
    cout << "Rectangle is not Possible"<<endl;
    return 0;
}