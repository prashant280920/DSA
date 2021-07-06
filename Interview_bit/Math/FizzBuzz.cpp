#include <bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    vector<string> B;
    for(int i=0; i<A; i++){
        if((i+1)%3==0 && (i+1)%5==0){
            B.push_back("FizzBuzz");
        }else if((i+1)%3 == 0){
            B.push_back("Fizz");
        }else if((i+1)%5 == 0){
            B.push_back("Buzz");
        }else{
            
            string str = to_string(i+1);
            B.push_back(str);
        }
    }
    for(int i=0; i<A; i++){
        cout << B[i] << " ";
    }
    cout << endl;
    return 0;
}