#include <bits/stdc++.h>
using namespace std;

bool my_comparison(string a, string b){
    string ab = a+b;
    string ba = b+a;
    return ab > ba;
}

int main(){

    int n;
    cin>>n;
    string t;
    vector<string> A;
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    

    sort(A.begin(), A.end(), my_comparison);
    t = "";
    for(int i=0; i< A.size(); i++){
        t+=A[i];
    }
    cout << "Largest Number : "<< t<< endl;
    return 0;
}