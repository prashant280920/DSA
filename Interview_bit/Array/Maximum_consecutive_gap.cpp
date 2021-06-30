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
    int n= A.size(), a=INT_MAX, b = INT_MIN;
    for(int i=0; i<n; i++){
        if(a>A[i]){
            a = A[i];
        }
        b = max(A[i], b);
    }

    int maxBucket[n - 1];
    int minBucket[n - 1];
    fill_n(maxBucket, n - 1, INT_MIN);
    fill_n(minBucket, n - 1, INT_MAX);

    float delta = (float)(b - a) / (float)(n - 1);
    for (int i = 0; i < n; i++) {
        if (A[i] == b || A[i] == a)
            continue;
 
        // Finding index of bucket.
        int index = (float)(floor(A[i] - a) / delta);
 
        maxBucket[index] = max(maxBucket[index], A[i]);
           minBucket[index] = min(minBucket[index], A[i]);
    }
    int prev_val = a;
    int max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        if (minBucket[i] == INT_MAX)
            continue;
        max_gap = max(max_gap, minBucket[i] - prev_val);
        prev_val = maxBucket[i];
    }
    max_gap = max(max_gap, b - prev_val);
 
    cout <<"Maximum Gap: "<< max_gap<<endl;

    return 0;
}