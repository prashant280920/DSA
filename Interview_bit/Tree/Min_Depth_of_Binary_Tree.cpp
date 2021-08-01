#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};
int mindepth(TreeNode* A){
    if(A->left == NULL && A->right == NULL)  return 1;

    int leftmin=INT_MAX ,rightmin=INT_MAX;
    
    if(A->left) leftmin = mindepth(A->left);
    if(A->right) rightmin = mindepth(A->right);

    return 1+min(leftmin,rightmin);
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
    
    cout << "Min Depth : " << mindepth(A) << endl;
    return 0;
}