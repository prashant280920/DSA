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
    n = A.size();
    int maxi[n], t = -1;
    memset(maxi,0,sizeof maxi);
    int mini[n];
    memset(mini,0,sizeof mini);
    //t = -1;
    for(int i=n-2; i>=0; i--){
        t = max(A[i+1],t);
        maxi[i] = t;
    }
    maxi[n-1] = 0;
    t=-1;
    for(int i=1; i<n; i++){
        t = max(A[i-1],t);
        mini[i] = t;
    }
    mini[0] = 0;
    queue<int> q;
    
    int count = 0;
    for(int i=0; i<n; i++){
        if(A[i]<maxi[i] && A[i]<mini[i]){
            count += (min(maxi[i],mini[i])-A[i]);
        }
    }

    cout << count<< endl;
    return 0;
}