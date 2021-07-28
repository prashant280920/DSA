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
    int  sum = 0, max_len = 0;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        if(A[i]==0) sum-=1;
        else sum+=1;

        if(sum==1) max_len = i+1;
        else if(m.find(sum)==m.end()) m.insert({sum,i});
        
        if(m.find(sum-1)!=m.end()){
            if(max_len<(i-m[sum-1])){
               // cout <<i<<" "<< sum-1<<" " <<m[sum-1];
                max_len = i-m[sum-1];
            }
        }
    }
    cout <<  max_len << endl;
    return 0;
}