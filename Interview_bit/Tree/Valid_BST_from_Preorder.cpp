#include<bits/stdc++.h>
using namespace std;


void buildTree(vector<int> &A, int &index, int arrlen, int min, int max){
    if(index>=arrlen) return;
    if(min <= A[index] && max>=A[index]){
        int root = A[index];
        index++;
        buildTree(A, index, arrlen, min, root);
        buildTree(A, index, arrlen, root, max);
    }
}

int main(){
    int n, B;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> B;
        A.push_back(B);
    }
    int n = A.size(), index = 0;
    buildTree(A, index, n, INT_MIN, INT_MAX);
    if(index==n){
        cout << "BST is possible" << endl;
        return 0;
    }else{
        cout << "BST not possible" << endl;
        return 0;
    }
    //return index==n
    return 0;
}