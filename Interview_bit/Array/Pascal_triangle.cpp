#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// For Row i, Row[i][0] = Row[i][i] = 1. 
// And Row[i][j] = Row[i-1][j] + Row[i-1][j-1], when j belongs to [1, i)


int main(){
    vector<vector<int>> X;
    for(int i=1; i<=5;i++){
        vector<int> B;
        for(int j=0; j<i; j++){
            if(i == 1 || i==2){
                B.push_back(1);
            }
            else{
                if(j==0 || j==i-1){
                    B.push_back(1);
                }else{
                    B.push_back(X[i-2][j-1] + X[i-2][j]);
                }
            }    
        }
        X.push_back(B);
    }
    for(int i=0; i<X.size(); i++){
        for(int j=0; j<X[i].size(); j++){
            cout << X[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}