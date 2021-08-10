#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }

    // O(N^2) Solution
    n = A.size();
    int left_inc[n], right_dec[n];
    left_inc[0] = 1;
    right_dec[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        int maxi = 0;
        for(int j=n-1; j>i; j--){
            if(A[i]>A[j]) maxi = max(right_dec[j], maxi);
        }
        right_dec[i] = maxi+1;
    }
    int omax = 0;
    for(int i=0; i<n; i++){
        int maxi = 0;
        for(int j=0; j<i; j++){
            if(A[i]>A[j]) maxi = max(left_inc[j], maxi);
        }
        left_inc[i] = maxi+1;
        omax = max(omax, left_inc[i]+right_dec[i]-1);
    }
    
    cout << "O(N^2) Solution: " << omax << endl;

    n = A.size();
    //left_inc[n]; right_dec[n];
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(i==0) ans.push_back(A[i]);
        else{
            if(A[i]>ans.back()) ans.push_back(A[i]);
            else{
                auto it = lower_bound(ans.begin(), ans.end(), A[i]) - ans.begin();
                ans[it] = A[i];
            }
        }
        left_inc[i] = ans.size();
    }
    ans.clear();
    omax = 0;
    for(int i=n-1; i>=0; i--){
        if(i==n-1) ans.push_back(A[i]);
        else{
            if(A[i]>ans.back()) ans.push_back(A[i]);
            else{
                auto it = lower_bound(ans.begin(), ans.end(), A[i]) - ans.begin();
                ans[it] = A[i];
            }
        }
        right_dec[i] = ans.size();
        omax = max(omax, left_inc[i]+right_dec[i]-1);
    }
    cout << "O(Nlog2N) Solution: " << omax << endl;

    return 0;
}