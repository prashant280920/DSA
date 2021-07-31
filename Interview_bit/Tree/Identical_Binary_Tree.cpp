#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

bool isSameTree(TreeNode* A, TreeNode* B){
    if(A==NULL && B==NULL) return 1;
    if(A==NULL || B==NULL) return 0;
    return (A->val==B->val && isSameTree(A->left, B->left) && isSameTree(A->right, B->right));
}
int main(){
    TreeNode* A = new TreeNode(1);
    A->left = new TreeNode(4);
    A->right = new TreeNode(2);
    A->right->right = new TreeNode(3);
    A->right->right->left = new TreeNode(6);
    A->left->right = new TreeNode(5);
    A->left->left = new TreeNode(8);
    A->left->right->right = new TreeNode(7);
    A->left->right->left = new TreeNode(9);
    
    /*
            1                     1       
          /   \                 /   \    
         4      2              4      2   
        / \      \            / \      \
       8   5      3          8   5      3 
          / \    /              / \    / 
         9   7  6              9   7  6   
    */
    cout << "            A                    B        \n";
    cout << "            1                    1        \n";
    cout << "          /   \\                /   \\    \n";
    cout << "         4      2             4      2    \n";
    cout << "        / \\      \\           / \\      \\\n";
    cout << "       8   5      3         8   5      3  \n"; 
    cout << "          / \\    /             / \\    / \n"; 
    cout << "         9   7  6             9   7  6    \n"; 
    
    if(isSameTree(A,A)) cout << "Both tree are same\n";
    else cout << "Both trees are different\n";
    

    TreeNode* B = new TreeNode(1);
    B->left = new TreeNode(4);
    B->right = new TreeNode(2);
    B->right->right = new TreeNode(3);
    B->right->right->left = new TreeNode(6);
    /*
            1                     1       
          /   \                 /   \    
         4      2              4      2   
        / \      \                     \
       8   5      3                     3 
          / \    /                     / 
         9   7  6                     6   
    */
    cout << "            A                    B        \n";
    cout << "            1                    1        \n";
    cout << "          /   \\                 / \\     \n";
    cout << "         4      2              4   2      \n";
    cout << "        / \\      \\                  \\  \n";
    cout << "       8   5      3                  3    \n"; 
    cout << "          / \\    /                 /     \n"; 
    cout << "         9   7  6                 6       \n"; 
    if(isSameTree(A,B)) cout << "Both tree are same\n";
    else cout << "Both trees are different\n";
    return 0;
}