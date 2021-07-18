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
    int B;
    cin >> B;
    n = A.size();
    int mini = INT_MAX;
    long long sum = 0, ans = 0;
    sort(A.begin(),A.end());
    for(int i=0; i<n-2; i++){
        int start = i+1, end = n-1;
        while(start<end){
            sum = (long long)(A[i])+(A[start])+(A[end]);
            if (sum == B){
                cout << B << endl;
                return B;
            }

            if(abs(sum-B)<mini){
                mini = abs(sum-B);
                ans = sum;
            }
            if(sum<B){
                start++;
            }else{
                end--;
            }

        }
    }
    cout << ans << endl;
    return 0;
}