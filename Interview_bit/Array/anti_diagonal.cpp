#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, count = 1;
    cin>>n;
    vector<vector<int>> A {{1,2,3},{4,5,6},{7,8,9}};
    n = A.size();
    vector<vector<int>> B;
    vector<int> t {A[0][0]}, k, row {0},col{0}, r, c;
    B.push_back(t);
    for(int i=0; i<(n+n-2); i++){
        if(col[0]+1<n){
            k.push_back(A[row[0]][col[0]+1]);
            r.push_back(row[0]);
            c.push_back(col[0]+1);
        }
        
        for(int j=0; j<t.size(); j++){
            if(row[j]+1<n){
                k.push_back(A[row[j]+1][col[j]]);
                r.push_back(row[j]+1);
                c.push_back(col[j]);
            }
        }
        t = k;
        B.push_back(t);
        k.clear();
        row = r;
        col = c;
        r.clear();
        c.clear();
    }

    for(int i=0; i<B.size(); i++){
        for(int j=0; j<B[i].size(); j++){
            cout<< B[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}