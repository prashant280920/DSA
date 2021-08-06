#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, s;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>s;
        A.push_back(s);
    }
    n = A.size();
    int profit=0, buy = 0, sell = 0;
    if(n==0) return 0;
    for(int i=1; i<n; i++){
        if(A[i]>=A[i-1]){
            sell++;
        }else{
            profit+=(A[sell]-A[buy]);
            sell = buy = i;
        }
    }
    profit+=(A[sell]-A[buy]);
    cout << "Max Profit: "<< profit << endl;
    return 0;
}