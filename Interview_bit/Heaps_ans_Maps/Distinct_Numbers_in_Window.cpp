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
    n = A.size();
    vector<int> ans;
    if(B>n){
        cout << "Empty list"<<endl;
        return 0;
    } 
    for(int i=0; i<B; i++){
        if(m.find(A[i])!=m.end()){
            m[A[i]]++;
        }else{
            m[A[i]] = 1;
        }
    } 
    ans.push_back(m.size());
    // for(auto i: m) cout << "{"<< i.first<<" "<<i.second<<"}\n";
    // cout << m.size();
    for(int i=B; i<n; i++){
        m[A[i-B]]--;
        m[A[i]]++;
        if(m[A[i-B]]==0) m.erase(A[i-B]);
        ans.push_back(m.size());
        // for(auto i: m) cout << "{"<< i.first<<" "<<i.second<<"}\n";
        // cout << m.size();
    }
    for(auto i: ans) cout << i<< " ";
    cout << endl;
    return 0;
}