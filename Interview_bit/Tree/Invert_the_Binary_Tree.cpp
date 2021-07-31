#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void invert(TreeNode* A){
    if(A==NULL ) return;
    invert(A->left);
    invert(A->right);
    TreeNode* left = A->left;
    TreeNode* right = A->right;
    A->left = right;
    A->right = left;
    
}

int main(){
    TreeNode* A = new TreeNode(8);
    A->left = new TreeNode(2);
    A->right = new TreeNode(9);
    A->right->right = new TreeNode(12);
    A->right->right->left = new TreeNode(11);
    A->left->right = new TreeNode(6);
    A->left->left = new TreeNode(1);
    A->left->right->right = new TreeNode(7);
    A->left->right->left = new TreeNode(5);
    
    /*
            8
          /   \
         2      9
        / \      \
       1   6      12
          / \    /
         5   7  11
    */
    cout << "            8\n";
    cout << "          /   \\\n";
    cout << "         2      9\n";
    cout << "        / \\      \\\n";
    cout << "       1   6      12\n"; 
    cout << "          / \\    /\n"; 
    cout << "         5   7  11\n"; 
    
    cout << "After Inversion: \n";
    invert(A);
    cout << "            "<<A->val<<"\n";
    cout << "          /   \\\n";
    cout << "         "<<A->left->val<<"     "<<A->right->val<<"\n";
    cout << "        /     / \\\n";
    cout << "      "<<A->left->left->val<<"     "<<A->right->left->val<<"   "<<A->right->right->val<<"\n"; 
    cout << "       \\    / \\    \n"; 
    cout << "       "<<A->left->left->right->val<<"  "<<A->right->left->left->val<<"   "<<A->right->left->right->val<<"\n"; 
    return 0;
}