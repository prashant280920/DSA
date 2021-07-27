#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,B;
    vector<int> A;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cin >> B;
    n = A.size();
    map<int,int> m;
    vector<int> index;
    int count = 0;
    for(int i=0; i<n; i++){
        if(A[i]%2) {
            m[i] = count;
            index.push_back(i);
            count = 0;
        }else{
            count++;
        }
    }
    m[n] = count;
    index.push_back(n);
    int ans = 0;
    if(B==0){
        for(int i=0; i<index.size(); i++){
            ans+=(pow(2,m[index[i]])-1);
        }
        return ans;
    }
    
    int k = index.size();
    for(int i=0; i<k-B; i++){
        ans+=((m[index[i]]+1)*(m[index[i+B]]+1));
        
    }
    
    
    cout << ans << endl;
    return 0;

     
}