#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

TreeNode* PostOrder(TreeNode* root){
    if(root == NULL) return NULL;
    root->left = PostOrder(root->left);
    root->right = PostOrder(root->right);

    if(root->left == NULL && root->right == NULL) return root;
    if(root->left == NULL) return root->right;
    if(root->right == NULL) return root->left;
    return root;
}

void Inorder(TreeNode* A){
    if(A==NULL) return;
    Inorder(A->left);
    cout << A->val<< " ";
    Inorder(A->right);
}

int main(){
    TreeNode* A = new TreeNode(11);
    A->left = new TreeNode(2);
    A->right = new TreeNode(13);
    A->right->right = new TreeNode(15);
    //A->right->left = new TreeNode(12);
    //A->right->right->left = new TreeNode(11);
    A->left->right = new TreeNode(3);
    A->left->left = new TreeNode(1);
    //A->left->right->right = new TreeNode(7);
    //A->left->right->left = new TreeNode(5);
    
    /*
            11
          /   \
         2      13
        / \      \
       1   3      15
    */
    cout << "A: \n";
    cout << "            11\n";
    cout << "          /   \\\n";
    cout << "         2      13\n";
    cout << "        / \\      \\\n";
    cout << "       1   3        15\n"; 
    // cout << "          / \\    /\n"; 
    // cout << "         5   7  11\n"; 
    
    TreeNode* ans = PostOrder(A);
    cout << "Inorder Traversal of resultant tree: ";
    Inorder(ans);
    cout << endl;
    

    return 0;
}