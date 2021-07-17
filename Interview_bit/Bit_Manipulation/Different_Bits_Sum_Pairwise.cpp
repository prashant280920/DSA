#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> c;
        A.push_back(c);
    }
    n = A.size();
    long long int ans=0;
    for(int i=0; i<31;i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(A[j]&(1<<i)){
                count++;
            }
        }
        ans+=(count*((long long )n-count)*2);
        ans = ans%1000000007;
    }
    cout << (int)ans << endl;
    return 0;
}