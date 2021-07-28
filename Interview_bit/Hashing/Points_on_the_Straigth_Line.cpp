#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,t;
    cin >> n;
    vector<int> A,B;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    for(int i=0; i<n; i++){
        cin >> t;
        B.push_back(t);
    }
    n = A.size();
    int  max_count=0;
    for(int i=0; i<n; i++){
        unordered_map<double,int> m;
        int max_size = 0, overlap=1;
        for(int j=i+1; j<n; j++){
            if(A[i]==A[j] && B[i]==B[j]) overlap++;
            else{
                double slope = A[i]!=A[j] ? (1.0*B[j]-B[i])/(A[j]-A[i]) : 1e9;
                m[slope]++;
                max_size = max(max_size,m[slope]);
            }
        }
        max_count = max(max_count,max_size+overlap);
    }
    cout << max_count << endl;
    return 0;
}