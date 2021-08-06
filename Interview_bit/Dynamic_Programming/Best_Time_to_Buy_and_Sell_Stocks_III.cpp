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
    int  buy=n-1;
    int right_max[n];
    right_max[n-1] = 0;
    for(int i=n-2; i>=0; i--){
        if(A[i]>A[buy]){
            buy = i;
        }
        right_max[i] = max(right_max[i+1], A[buy]-A[i]);
    }
    //for(int i=0; i<n; i++) cout << right_max[i]<<" ";
    int least = 0, max_profit = 0;
    for(int i=0; i<n; i++){
        if(A[i]<A[least]) least = i;
        max_profit = max(max_profit, right_max[i]+(A[i]-A[least]));
    }
    cout <<"Max Profit: "<< max_profit<<endl;
    return 0;
}