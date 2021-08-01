#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


TreeNode* CreateTree(const vector<int> &A, int start , int end){
    if(start>end) return NULL;
    int mid = (start+end)/2;
    TreeNode* node = new TreeNode(A[mid]);
    //node->val = A[mid];
    if(start == end) return node;
    node->left = CreateTree(A,start, mid-1);
    node->right = CreateTree(A,mid+1, end);
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
    cout << "Enter Sorted Array: ";
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    n = A.size();
    TreeNode* ans = CreateTree(A, 0, n-1);
    //return ans;
    cout << "Printing the inorder Traversal of tree : \n";
    inorder(ans);
    cout << endl;
    return 0;
}