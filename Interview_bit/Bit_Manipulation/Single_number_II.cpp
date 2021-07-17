#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> c;
        A.push_back(c);
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
        //int count0 = n-count;
        if(count%2!=0){
            ans = ans<<1;
            ans+=1;
        }else{
            ans = ans<<1;
        }
    }
    cout<< "Missing Number: "<< ans <<endl;
    return 0;
}