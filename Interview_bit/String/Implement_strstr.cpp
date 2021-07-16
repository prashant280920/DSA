#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B;
    cin >> A;
    cin >> B;
    int n=B.length(), m = A.length();
    int index = -1;
    for(int i=0; i<n; i++){
        if(A[0]==B[i]){
            index=i;
            int j=0;
            cout <<"c"<< A[j]<<B[i]<<"\n";
                cout << j<<" "<<i<<"\n";
            while(A[j+1]==B[i+1] && i+1<n && j+1<m){
                i++;
                j++;
                cout <<"c"<< A[j]<<B[i]<<"\n";
                cout << j<<" "<<i<<"\n";
            }
            
                cout << j<<" "<<i<<"\n";
            if(j==m-1){
                cout << index;
                return index;
            }else{
                i-=j;
            }
        }
        cout << i;
    }
    cout << -1;
    return -1;
}