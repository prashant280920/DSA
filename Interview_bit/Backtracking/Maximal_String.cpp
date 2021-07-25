#include<bits/stdc++.h>
using namespace std;

string lexigoBig(string &A, int count ){
    if(count == 0){
        return A;
    }
    string maxi = A;
    for(int i=0; i<A.length(); i++){
        for(int j = i+1; j<A.length(); j++){
            if(A[i]<A[j]){
                swap(A[i],A[j]);
                maxi = max(maxi, lexigoBig(A,count-1));
                swap(A[i],A[j]);
            }
            
        }
    }

    return maxi;
}


int main(){
    string A;
    cin >> A;
    int B;
    cin >>B;
    string ans = lexigoBig(A,B);
    cout << ans<<endl;
    return 0;
}