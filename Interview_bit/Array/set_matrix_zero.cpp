#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,s;
    cin >> n>>m;
    vector<vector<int>> A;
    vector<int> t(m);
    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            cin>>s;
            t[j] = s;

        }
        A.push_back(t);
    }

    int row[A.size()], col[A[0].size()];
    memset(row, 0, sizeof row);
    memset(col, 0, sizeof col);
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
            if(A[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    vector<int> C;
    for(int i=0; i<A[0].size(); i++){
        C.push_back(0);
    }
    for(int i=0; i<A.size(); i++){
        if(row[i] == 1){
            A[i] = C;
        }
    }
    for(int i=0; i<A[0].size(); i++){
        if(col[i] == 1){
            for(int j=0; j<A.size(); j++){
                A[j][i] = 0;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<A[i][j]<<" ";

        }
        cout << "\n";
    }

    return 0;
}