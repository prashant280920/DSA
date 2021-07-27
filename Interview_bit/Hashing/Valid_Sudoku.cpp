#include<bits/stdc++.h>
using namespace std;

bool cube(int row, int col, vector<string> &A){
    int arr[10] = {0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(A[3*row+i][3*col+j]>'0' && A[3*row+i][3*col+j]<='9'){
                if(arr[A[3*row+i][3*col+j]-'0'] == 1){
                    //cout << A[3*row+i][3*col+j]<<3*row+i<<3*col+j;
                    return false;
                }
                arr[A[3*row+i][3*col+j]-'0']++;
        
            }
        }
    }
    return true;
}

int main(){
    string t;
    vector<string> A;
    for(int i=0; i<9; i++){
        cin >> t;
        A.push_back(t);
    }
    int row = 9, col = 9;
    for(int i=0; i<row; i++){
        int arr[10] = {0};
        for(int j=0; j<col; j++){
            if(A[i][j]>'0' && A[i][j]<='9'){
                if(arr[A[i][j]-'0'] == 1 ){
                    cout << "Not a Valid sudoku! : 0" << endl;
                    return 0;
                }
                arr[A[i][j]-'0']++;
            }
            
        }
    }
    for(int i=0; i<col; i++){
        int arr[10] = {0};
        for(int j=0; j<row; j++){
            if(A[j][i]>'0' && A[j][i]<='9'){
                if(arr[A[j][i]-'0'] == 1 ){
                    cout << "Not a Valid sudoku! : 0" << endl;
                    return 0;
                }
                arr[A[j][i]-'0']++;
            }
            
        }
    }
    if(!cube(0,0,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(0,1,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(0,2,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(1,0,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(1,1,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(1,2,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(2,0,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(2,1,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }
    if(!cube(2,2,A)){
        cout << "Not a Valid sudoku! : 0" << endl;
        return 0;
    }

    cout << "A Valid sudoku! : 1" << endl;
    return 1;
}

/*
53..7....
6..195...
.98....6.
8...6...3
4..8.3..1
7...2...6
.6....28.
...419..5
....8..79

"..4...63.", ".........", "5......9.", "...56....", "4.3.....1", "...7.....", "...5.....", ".........", "........." 
*/