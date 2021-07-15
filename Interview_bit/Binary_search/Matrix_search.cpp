#include<bits/stdc++.h>
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
    // for(int i=0; i<n; i++){
        
    //     for(int j=0; j<m; j++){
    //         cout << A[i][j]<<" ";

    //     }
    //    cout << "\n";
    // }

    n = A.size(), m = A[0].size();
    int start_row=0,  end_row=n-1;
    int B;
    cin >>B;

    while(start_row<=end_row){
        int mid_row = (start_row+end_row)/2;
        if(A[mid_row][0]<=B && A[mid_row][m-1]>=B){
            int start_col=0, end_col=m-1;
            while(start_col<=end_col){
                int mid_col = (start_col+end_col)/2;
                if(A[mid_row][mid_col]==B){
                    cout << 1 <<endl;
                    return 1;
                }else if(A[mid_row][mid_col]<B){
                    start_col = mid_col+1;
                }else{
                    end_col = mid_col-1;
                }
            }
            cout << 0 <<endl;
            return 0;
        }

        if(A[mid_row][0]>B){
            end_row=mid_row-1;
        }else{
            start_row = mid_row+1;
        }
    }
    cout << 0 <<endl;
    return 0;
}