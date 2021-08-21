#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m, s;
    cin >> n >> m;
    vector<vector<int>> A;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j = 0; j<m; j++) {
            cin >> s;
            temp.push_back(s);
        }
        A.push_back(temp);
    }
    n = A.size(); m = A[0].size();
    vector<int> ans;
    long int t = n*m;
    int sr = 0, er = n-1, sc = 0, ec = m-1;
    while(sr<=er && sc<=ec){
        if(sr<=er && sc<=ec){
            for(int i=sc; i<=ec; i++){
                ans.push_back(A[sr][i]);
            }
        }
        
        sr++;
        if(sr<=er && sc<=ec){
            for(int i=sr; i<=er; i++){
                ans.push_back(A[i][ec]);
            } 
            
        }
        ec--;
        if(sr<=er && sc<=ec){
            for(int i=ec; i>=sc; i--){
                ans.push_back(A[er][i]);
                
            }
        }
        er--;
        if(sr<=er && sc<=ec){
            for(int i=er; i>=sr; i--){
                ans.push_back(A[i][sc]);
            }
        }
        sc++;
    }
    for(auto i: ans) cout << i << " ";
    cout << endl;
    return 0;
}