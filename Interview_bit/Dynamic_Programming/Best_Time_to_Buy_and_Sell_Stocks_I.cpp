#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    n = A.size();
    int maxProfit=INT_MIN, least  = 0;
    if(n==0) return 0;
    for(int i=0; i<n; i++){
        if(A[i]<A[least]){
            least = i;
        }
        maxProfit = max(maxProfit, A[i]-A[least]);
    }
    cout << "Max Profit: "<< maxProfit<< endl;
    return 0;
}