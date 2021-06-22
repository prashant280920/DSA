#include<bits/stdc++.h>
using namespace std;

// one approach is to create array of length n , initialise with 0
// then increase the count of element if the count is 0 , then A[i]++
// if the count !=0 the that number is the duplicate number

// another efficient approach is loop detection using  Floyd’s cycle finding algorithm. 
// We use this to detect loops in a linked list.
// The idea is to consider array items as linked list nodes. Any particular index is pointing to the value at that index. 
// And you will see that there is a loop
// In case of a duplicate, two indexes will have same value, and they will form a cycle  

int main(){
    int n,t;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>t;
        A[i] = t;
    }
    int slow = A[0], fast=A[A[0]];
    while(slow!=fast){
        slow = A[slow];
        fast = A[A[fast]];
    }

    fast = 0;
    while( slow != fast){
        slow = A[slow];
        fast = A[fast];
    }
    cout << "Duplicate Number is : "<<slow<<endl;
    return 0;
}