#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cin >> A;
    int a[A][A];
    int count = 1;
    int start_row=0, end_row = A, start_col = 0, end_col = A;
    
    while(start_row<end_row && start_col < end_col){
        for(int i=start_col; i<end_col; i++){
            a[start_row][i] = count;
            count++;
        }
        start_row++;
        if(start_col<end_col ){
            for(int i=start_row; i<end_row; i++){
                a[i][end_col-1] = count;
                count++;
                
            }
            end_col--;
        }
        if(start_row<end_row){
            for(int i=end_col-1; i>=start_col; i--){
                a[end_row-1][i] = count;
                count++;
            }
            end_row--;
        }
        if(start_col<end_col){
            for(int i=end_row-1; i>=start_row; i--){
                a[i][start_col] = count;
                count++;
            }
            start_col++;
        }  
    
    }

    vector<vector<int>> B;
    vector<int> s(A);
    for(int i=0; i<A; i++){
        for(int j=0; j<A; j++){
            s[j] = a[i][j];
        }
        B.push_back(s);
    }
    cout << "Spiral Matrix:\n";
    for(int i=0; i<A; i++){
        for(int j=0; j<A; j++){
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
    

    return 0;
}