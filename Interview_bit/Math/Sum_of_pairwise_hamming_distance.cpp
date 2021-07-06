#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,s;
    cin >> n;
    vector<long long int> A;
    for(int i=0; i<n; i++){
        cin >> s; A.push_back(s);
    }
    long long int ans=0, count=0;
    n=A.size();
    for(int i=0; i<32; i++){
        count = 0;
        for(long long int j=0; j<n; j++){
            if(A[j] & (1<<i)){
                count++;
            }
        }
        ans += (count)*(n-count)*2;
    }
    cout << ans%1000000007<<endl;;
    return 0;
}