#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    n = A.size();
    //int n = A.size();
    vector<vector<int>> ans;
    sort(A.begin(), A.end());
    for(int i=0; i<n-3; i++){
        if(i>0 and A[i]==A[i-1]) continue;
        for(int j=i+1; j<n-2; j++){
            if(j>i+1 && A[j]==A[j-1]) continue;
            int l = j+1, r = n-1;
            while(l<r){
                int sum = A[i]+A[j]+A[l]+A[r];
                if(sum == B){
                    ans.push_back({A[i],A[j],A[l],A[r]});
                    int t = A[l];
                    while(l<n && t==A[l]) l++;
                    t = A[r];
                    while(r>l && t == A[r]) r--;
                }else if (sum<B) l++;
                else r--;
            }
        }
    }
    n = ans.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cout << ans[i][j]<< " ";
        }
        cout << "\n";
    }
    return 0;
}