#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

int searchIndex(vector<int> &B, int start, int end, int val){
    for(int i=start; i<=end; i++){
        if(B[i]==val){
            return i;
        } 
    }
    return -1;
}

TreeNode* CreateTree(vector<int> &A, vector<int> &B, int start, int end, int &preIndex){
    if(start>end) return NULL;
    TreeNode* node = new TreeNode(A[preIndex]);
    preIndex++;
    if(start==end) return node;
    int inOrderIndex = searchIndex(B, start, end, node->val);
    node->left = CreateTree(A,B, start, inOrderIndex-1, preIndex);
    node->right = CreateTree(A,B, inOrderIndex+1, end, preIndex);
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
    vector<int> A, B;
    cout << "Enter Preorder: ";
    for(int i=0; i<n; i++){
        cin >> t;
        A.push_back(t);
    }
    cout << "Enter Inorder: ";
    for(int i=0; i<n; i++){
        cin >> t;
        B.push_back(t);
    }
    n = A.size();
    int preIndex = 0;
    TreeNode* ans = CreateTree(A,B, 0,n-1, preIndex);
    cout << "Printing the inorder Traversal of tree : \n";
    inorder(ans);
    cout << endl;
    return 0;
}