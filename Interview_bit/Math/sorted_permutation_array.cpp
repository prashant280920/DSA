#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    vector<char> B;
    int n = A.length();
    for(int i=0; i<n; i++){
        B.push_back(A[i]);
    }
    sort(B.begin(),B.end());

    vector<int> index;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i]==B[j]){
                index.push_back(j+1);
            }
        }
    }

    vector<int> p;
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=i+1; j<n; j++){
            if(index[i]>index[j]){
                count++;
            }
        }
        p.push_back(count);
    }
    

    long int ans = 1*p[n-1],l=1,s=1;
    for(int i=n-2; i>=0; i--){
        ans+=(p[i]*l);
        s++;
        l*=s;
        l%=1000003;
        ans%=1000003;
    }
    ans++;
    cout << "Rank of" << A<< " : "<< ans%1000003 <<endl;
    return 0;
}