#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, s;
    cin >> n>>m;
    vector<vector<int>> A(n,vector<int>(m,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> s;
            A[i][j] = s;
        }
    }
    int row = A.size(), col = A[0].size();
    for(int i=row-1; i>=0; i--){
        for(int j= col-1; j>=0; j--){
            if(i==row-1 && j==col-1) continue;
            else if(i==row-1) A[i][j] += A[i][j+1];
            else if(j==col-1) A[i][j] += A[i+1][j];
            else{
                A[i][j] += min(A[i+1][j],A[i][j+1]);
            } 
          //  cout << A[i][j] <<" ";   
        }
        //cout <<"\n";
    }
    cout << A[0][0] << endl;
    return 0;
}