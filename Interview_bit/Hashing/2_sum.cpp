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
    unordered_map<int,int> m;
    vector<int> ans;
    n = A.size();
    for(int i=0; i<n; i++){
        if(m.find(B-A[i])!=m.end()){
            ans.push_back(m[B-A[i]]+1);
            ans.push_back(i+1);
            break;
        }else{
            if(m.find(A[i])==m.end()){
                m[A[i]]=i;
            }
            
        }
    }
    cout << ans[0]<<" "<<ans[1]<<endl;
    return 0;
}