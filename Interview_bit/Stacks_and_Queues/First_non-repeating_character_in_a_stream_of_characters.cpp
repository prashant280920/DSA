#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    int n = A.length();
    queue<char> q;
    string ans = "";
    int arr[26] = {0};
    
    for(int i=0; i<n; i++){
        q.push(A[i]);
        arr[A[i]-'a']++;
        
        while(!q.empty() && arr[q.front()-'a']>1){
            q.pop();
        }
        if(q.empty()){
            ans+="#";
        }else{
            ans+=q.front();
        }
    }
    cout << ans<<endl;
    return 0;
}