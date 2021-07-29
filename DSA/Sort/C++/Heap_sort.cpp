#include<bits/stdc++.h>
using namespace std;

// Pseudo Code

// Heapify(A,index,array_len)
//     largest = index, left_child=2*index+1, right_child = 2*index+2;
//     if A[left_child]>A[largest] then: largest = left_child
//     if A[right_child]>A[largest] then: largest = right_child
//     if largest!=index then: swap(A[largest],A[index])
//     recursevily check at new largest index:  Heapify(A,largest,array_len)

// HeapSort(A,n)
//     for n/2 index to 0: 
//          create heap using Heapify(A,i,n)
//     for n-1 to 0: 
//          swap(A[0],A[i]);
//          maintain heap for i length of array using Heapify(A,0,i)


// Time Complexity :
// 1. Heap
//     For Searching Root - O(1)
//     For Deleting Root - O(log2n)
//     For Inserrting element - O(log2n)
// 2. HeapSort - O(n*log2n)

// Space Complexity - O(1) 

// Key Point
// It is not Stable Sort
// It is not Adaptive Sort

//----------------- Declaration of all functions----------------------//
void heapify(vector<int> &A, int node_index, int array_len);
void heapSort(vector<int> &A);
void print(vector <int> &a);


//------------------ALL functions------------------------------------//
void heapSort(vector<int> &A){
    int n = A.size();
    // create heap
    for(int i=n/2; i>=0; i--) heapify(A,i,n);
    // sort the array
    for(int i=n-1; i>=0; i--){
        swap(A[0],A[i]);
        heapify(A,0,i);
    }
}

void heapify(vector<int> &A, int node_index, int array_len){
    int n = array_len;
    int largest = node_index, left_child = 2*node_index+1, right_child = 2*node_index+2;

    if(left_child<n && A[left_child]>A[largest]) largest = left_child;
    if(right_child<n && A[right_child]>A[largest]) largest = right_child;

    if(largest!=node_index){
        swap(A[largest],A[node_index]);
        heapify(A, largest, array_len);
    } 
}

void print(vector <int> &a){
    for(auto i: a) cout << i << " ";
    cout << "\n";
}


//----------------------------main----------------------------//
int main(){
    int n, B;
    cout << "Enter Array length: ";
    cin >> n;
    vector<int> A;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    cout << "Sorted array using Heap Sort: \n";
    heapSort(A);
    print(A);
    return 0;
}