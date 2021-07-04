#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cout << "Enter Number of element: ";
    cin >> n;
    vector<int> A;
    cout << "Enter element with space: \n";
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    int B;
    cout << "Number of element to pick: ";
    cin >>B;
    
    n = A.size();
    int t = n-B, sum =0;
    for(int i=0; i<n; i++){
        sum+=A[i];
    }
    int bucket_sum = 0;
    for(int i=0; i<t; i++){
        bucket_sum+=A[i];
    }
    int j=0, mini = bucket_sum;
    for(int i=t; i<n; i++){
        bucket_sum+=(A[i]-A[j]);
        mini = min(mini,bucket_sum);
        j++;
    }
    cout << "Max Sum: "<< sum - mini<< endl;
    return 0;
}