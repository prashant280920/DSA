#include<bits/stdc++.h>
using namespace std;

int main(){

    int s,B;
    cin >> B;
    vector<int> A;
    for(int i=0; i<B; i++){
        cin >> s;
        A.push_back(s);
    }
    int n = A.size();
    s=-1;
    for(int i = n-1; i>0; i--){
        if(A[i]>A[i-1]){
            s = i-1;   
            break;
        }
    }
    
    if(s==-1){
        sort(A.begin(), A.end());
        for(int i=0; i<n; i++){
            cout << A[i] << " ";
        }
        return 0;
    }
    int e=n-1;
    for(int i=s+1; i<n; i++){
        if(A[i]<=A[s]){
            e = i-1;
            break;
        }
    }

    swap(A[s],A[e]);
    sort(A.begin()+s+1, A.end());
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout <<endl;
    return 0;
}