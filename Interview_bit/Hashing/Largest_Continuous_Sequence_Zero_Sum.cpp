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
    n = A.size();
    int sum = 0, start=-1, end=-1, max_len = 0;
    unordered_map<int, int> m;
    m.insert({0,-1});
    for(int i=0; i<n; i++){
        sum+=A[i];
        if(m.find(sum)!=m.end()){
            if(max_len<i-m[sum]){
                start = m[sum]+1;
                end = i;
                max_len = i-m[sum];
            }
        }else{
            m[sum] = i;
        }
    }
    vector<int> ans;
    if(start!=-1){
        for(int i=start; i<=end; i++){
            ans.push_back(A[i]);
        }
    }
   
    for(auto i:ans) cout << i<<" ";
    cout << endl;
    return 0;
}