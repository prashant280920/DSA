#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,s;
    cin >> a;
    vector<int> A;
    for(int i=0; i<a; i++){
        cin >> s;
        A.push_back(s);     
    }
    long long int n = A.size();
    long long int n_sum = n*(n+1)/2, n2_sum = n*(n+1)*(2*n+1)/6;
    for(long long int i=0; i<n; i++){
        n_sum -= (long long int)A[i];
        n2_sum -= (long long int)A[i]*(long long int)A[i];    
    }
    long long int missing = ((n2_sum/n_sum)+n_sum)/2;
    long long int repeat = missing - n_sum;
    

    
    cout << "Repeat: "<<repeat<<"\nMissing: "<<missing<<endl;
    return 0;
}