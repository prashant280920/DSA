#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    vector<int> A,B,C;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        B.push_back(s);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        C.push_back(s);
    }

    vector<vector<int>> vect(100000+5, vector<int> (3,0));
    n =A.size();
    for(int i=0; i<n; i++){
        if(vect[A[i]][0]==0) vect[A[i]][0]=1;
    }
    n =B.size();
    for(int i=0; i<n; i++){
        if(vect[B[i]][1]==0) vect[B[i]][1]=1;
    }
    n =C.size();
    for(int i=0; i<n; i++){
        if(vect[C[i]][2]==0) vect[C[i]][2]=1;
    }
    vector<int> ans;
    for(int i=0; i<100000+2; i++){
        if(vect[i][0]+vect[i][1]+vect[i][2]>1) ans.push_back(i); 
    }
    for(auto i: ans) cout << i << " ";
    cout <<endl;
    return 0;
}