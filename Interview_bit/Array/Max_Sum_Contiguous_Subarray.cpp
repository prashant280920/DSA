#include <bits/stdc++.h>
using namespace std;

// to solve this problem we are using Kadane’s Algorithm:
// this is something we can say as a DP problem
// Pseudo Code:
// Initialize:
//     max_so_far = INT_MIN
//     max_ending_here = 0

// Loop for each element of the array
//   (a) max_ending_here = max_ending_here + a[i]
//   (b) if(max_so_far < max_ending_here)
//             max_so_far = max_ending_here
//   (c) if(max_ending_here < 0)
//             max_ending_here = 0
// return max_so_far


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max_sum = INT_MIN;
    int max_loop = 0;
    for(int i=0; i<n; i++){
        max_loop+=a[i];
        if(max_loop>max_sum){
            max_sum = max_loop;
        }
        if (max_loop<0){
            max_loop = 0;
        }
    }
    cout<<max_sum;

    return 0;
}