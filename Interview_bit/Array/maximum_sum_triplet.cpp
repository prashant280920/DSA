#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    
    int ans = 0;
    n=A.size();
    int right_max[n+1];

    right_max[n] = INT_MIN;
  
    for(int i=n-1;i>=0;i--){
        right_max[i] = max(A[i+1],right_max[i+1]);
    }
    
    set<int> left_max;
    left_max.insert(INT_MIN);
    
    for(int i=0; i<n-1; i++){
        if(right_max[i]>A[i]){
            
            ans = max(ans,( *(--left_max.lower_bound(A[i]))+A[i]+right_max[i])); 
            cout<<(*(--left_max.lower_bound(A[i])))<<" "<<A[i]<<" "<<right_max[i]<<" "<<ans<<"\n";
        }
        
        left_max.insert(A[i]); 
    }
    
    cout<< ans;

    return 0;
}