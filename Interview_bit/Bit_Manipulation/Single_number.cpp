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

    int ans=0;
    n=A.size();
    for(int i=32; i>=0; i--){
        int count=0;
        for(int j=0; j<n; j++){
            if(A[j]&(1<<i)){
                count++;
            }
        }
        
        if(count%2!=0){
            ans = ans<<1;
            ans+=1;
        }else{
            ans = ans<<1;
        }
    }
    cout << "Using Method 1: "<<ans <<endl;

    ans=0;
    for(int i=0; i<n; i++){
        ans ^= A[i];
    }
    cout << "Using Method 2: "<<ans <<endl;
    return 0;
}