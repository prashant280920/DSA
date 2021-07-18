#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    n = A.size();
    sort(A.begin(),A.end());
    vector<vector<int>> C;
    long long sum = 0;
    if(n==0 || n==1 || n==2){
        cout << " "<<endl;
        return 0;
    }
    if(A[0]>=0){
        cout << " "<<endl;
        return 0;
    } 
    for(int i=0; i<n-2; i++){
        //int first = A[i];
        int start = i+1, end = n-1;
        //vector<int> B (3);
        while(start<end){
            sum=(long long )(A[i])+(A[start])+(A[end]);
            if(sum == 0){
                // B[0] = A[i];
                // B[1] = A[start];
                // B[2] = A[end];
                C.push_back({A[i],A[start],A[end]});
                start++;
                end--;
            }else if(sum<0){
                start++;
            }else{
                end--;
            }
        }
    }
    sort(C.begin(),C.end());
    C.erase(unique(C.begin(),C.end()),C.end());
    n = C.size();
    for(int i=0; i<n; i++){
        cout << "(";
        for(int j=0; j<3; j++){
            cout << C[i][j]<<",";
        }
        cout << ") ";
    }
    cout << endl;
    return 0;
}