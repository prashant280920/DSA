#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin >>m;
    vector<vector<int>> A;
    vector<int> t(m);
    for(int i=0; i<m; i++){
        
        for(int j=0; j<m; j++){
            cin>>s;
            t[j] = s;

        }
        A.push_back(t);
    }
    int row=A.size(); 
    int col = row;
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            swap(A[i][j], A[j][i]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col/2; j++){
            swap(A[i][j], A[i][col-j-1]);
        }
    }
    cout << "After 90 degree rotation : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;
    return 0;
}