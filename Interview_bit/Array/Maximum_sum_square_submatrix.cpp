#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,s;
    cin >> a >> b;
    vector<vector<int>> A;
    vector<int> t(b);
    for(int i=0; i<a; i++){
        
        for(int j=0; j<b; j++){
            cin>>s;
            t[j] = s;

        }
        A.push_back(t);
    }
    int B;
    cin >>B;

    int row = A.size(), col = A[0].size();
    vector<vector<int>> C;
    for(int i=0; i<row; i++){
        vector<int> D {};
        for(int j=0; j<col-B+1; j++){
            int sum=0;
            for(int d=0; d<B; d++){
                sum+=A[i][j+d];
            }
            D.push_back(sum);
        }
        C.push_back(D);
    }

    int max_sum = INT_MIN;
    int row_C = C.size(), col_C = C[0].size();

    for(int i=0; i<col_C; i++){
        for(int j=0; j<row_C-B+1; j++){
            int sum_C = 0;
            for(int d=0;d<B; d++){
                sum_C+=C[d+j][i];   
            }
            max_sum = max(max_sum,sum_C);
        }
    }
    cout <<"Maximum sum square submatrix: "<< max_sum << endl;
    return 0;
}