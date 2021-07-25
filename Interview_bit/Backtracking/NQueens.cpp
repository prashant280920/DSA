#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &mat, int row, int col){
    for(int i=row-1; i>=0; i--){
        if(mat[i][col]){
            return false;
        }
    }
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--){
        if(mat[i][j]){
            return false;
        }
    }
    for(int i=row-1, j=col+1; i>=0 && j<mat[0].size(); i--,j++){
        if(mat[i][j]){
            return false;
        }
    }
    return true;
}

void placeQueen(vector<vector<int>> &mat,int A, int row, vector<vector<string>> &ans){
    if(row == A){
        vector<string> u;
        for(int i=0; i<A; i++){
            string k = "";
            for(int j=0; j<A; j++){
                if(mat[i][j]) k+="Q";
                else k+=".";       
                
            }
            u.push_back(k);
            
        }
        ans.push_back(u);
        return ;
    }
    for(int i=0; i<A; i++){
        if(isSafe(mat,row,i)){
            mat[row][i] = 1;
            placeQueen(mat, A, row+1, ans);
            mat[row][i] = 0;
        }
        
    }
}
int main(){
    int A;
    cin >> A;
    vector<vector<int>> mat(A,vector<int> (A,0));
    vector<vector<string>> ans;
    placeQueen(mat, A, 0, ans);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<A; j++){
            cout << ans[i][j]<<"\n";
        }
        cout <<"\n";
    }
    return 0;
}