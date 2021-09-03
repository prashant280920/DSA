#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


int search_max(vector<int> &A, int start, int end){
    int maxi = A[start];
    int index = start;
    for(int i=start; i<=end; i++){
        if(maxi<A[i]){
            maxi = A[i];
            index = i;
        }
    }
    return index;
}
TreeNode* construct(vector<int> &A, int start, int end){
    if(start>end) return NULL;
    int index = search_max(A, start, end);
    TreeNode* node = new TreeNode(A[index]);
    if(start==end) return node;
    node->left = construct(A, start, index-1);
    node->right = construct(A, index+1, end);
    return node;    
}


void inorder(TreeNode* A){
    if(A==NULL) return;
    
    inorder(A->left);
    cout << A->val<<" ";
    //ans.push_back(A->val);
    inorder(A->right);
}
int main(){
    int n, t;
    cin >> n;
    vector<int> A;
    cout << "Enter Inorder traversal of cartesian tree: ";
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    n = A.size();
    int n = A.size();
    TreeNode* ans = construct(A, 0, n-1);
    cout << "Printing the inorder Traversal of tree : \n";
    inorder(ans);
    cout << endl;
    return 0;
}