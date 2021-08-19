#include<bits/stdc++.h>
using namespace std;


int main(){
    string A;
    cin >> A;
    string sym="", ope="";
    int n = A.length();
    for(int i=0; i<n; i++){
        if(i%2) ope+=A[i];
        else sym+=A[i];
    }
   // cout << sym << " " << ope<<"\n";
    n = sym.length();
    vector<vector<int>> T(n, vector<int> (n,0)), F(n, vector<int> (n,0));
    //int T[n][n], F[n][n];
    for(int gap = 0; gap<n; gap++){
        for(int i=0, j=gap; j<n; i++, j++){
            if(gap == 0){
                T[i][j] = (sym[i]=='T') ? 1:0;
                F[i][j] = (sym[i]=='F') ? 1:0;
            }else{
                for(int k=i; k<j; k++){
                    int leftT = T[i][k];
                    int rightT = T[k+1][j];
                    int leftF =F[i][k];
                    int rightF = F[1+k][j];
                    //char operat = ope[k];
                    if(ope[k]=='|'){
                        T[i][j] += ((leftT*rightF)%1003 + (leftT*rightT)%1003 + (leftF*rightT)%1003)%1003;
                        T[i][j]%=1003;
                        F[i][j] += (leftF*rightF)%1003;
                        F[i][j]%=1003;
                    }else if(ope[k]=='&'){
                        F[i][j] += ((leftT*rightF)%1003 + (leftF*rightF)%1003 + (leftF*rightT)%1003);
                        F[i][j]%=1003;
                        T[i][j] += (leftT*rightT)%1003;
                        T[i][j]%=1003;
                    }else{
                        T[i][j] += ((leftT*rightF)%1003 + (leftF*rightT)%1003);
                        T[i][j]%=1003;
                        F[i][j] += ((leftT*rightT)%1003 + (leftF*rightF)%1003);
                        F[i][j]%=1003;
                    }
                }
            }
        }
    }
   
    cout << T[0][n-1] << endl;

    return 0;
}