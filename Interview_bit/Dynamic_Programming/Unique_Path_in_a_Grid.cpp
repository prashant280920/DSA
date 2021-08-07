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
    n = A.size(); m = A[0].size();
    //A[n-1][m-1] = 1;
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            if(A[row][col]==1) A[row][col] = -1;
        }
    }
    for(int row=n-1; row>=0; row--){
        for(int col=m-1; col>=0; col--){
            if(A[row][col]!=-1){
                if(row==n-1 && col==m-1) A[row][col]=1;
                else if(row==n-1){
                    if(A[row][col+1]!=-1) A[row][col]+=A[row][col+1];
                }else if(col==m-1){
                    if(A[row+1][col]!=-1) A[row][col]+=A[row+1][col];
                }else{
                    if(A[row][col+1]!=-1) A[row][col]+=A[row][col+1];
                    if(A[row+1][col]!=-1) A[row][col]+=A[row+1][col];
                }
            }
             
        }
    }
    if(A[0][0]==-1) A[0][0]= 0;
    cout << "Number of unique Path: " << A[0][0] << endl;
    return 0;
}