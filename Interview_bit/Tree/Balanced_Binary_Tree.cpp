#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};
int balanced(TreeNode* A, bool &isTrue){  
    if(A==NULL) return 0;
    int left_hight = balanced(A->left, isTrue);
    int right_hight = balanced(A->right, isTrue);
    if(abs(left_hight-right_hight)>1) isTrue = false;
    return 1+max(left_hight, right_hight);
}


int main(){
    TreeNode* A = new TreeNode(1);
    A->left = new TreeNode(2);
    A->right = new TreeNode(2);
    A->right->right = new TreeNode(3);
    A->right->left = new TreeNode(4);
    //A->right->right->left = new TreeNode(11);
    A->left->right = new TreeNode(4);
    A->left->left = new TreeNode(3);
    //A->left->right->right = new TreeNode(7);
    //A->left->right->left = new TreeNode(5);
    
    /*
            1
          /   \
         2      2
        / \    / \
       3   4  4   3
    */
    cout << "A: \n";
    cout << "            1\n";
    cout << "          /   \\\n";
    cout << "         2      2\n";
    cout << "        / \\   /  \\\n";
    cout << "       3   4  4    3\n"; 
    // cout << "          / \\    /\n"; 
    // cout << "         5   7  11\n"; 
    
    bool isTrue = true;
    int h = balanced(A, isTrue);
    if(isTrue) cout << "It is a Balanced Binary Tree\n";
    else cout << "Not a Balanced Binary Tree\n";

    TreeNode* B = new TreeNode(8);
    //B->left = new TreeNode(2);
    B->right = new TreeNode(2);
    B->right->right = new TreeNode(3);
    //B->right->right->left = new TreeNode(11);
    //B->left->right = new TreeNode(3);
    //B->left->left = new TreeNode(1);
    //B->left->right->right = new TreeNode(5);
    //B->left->right->left = new TreeNode(5);
    
    /*
            8
              \
               2
                \ 
                 3 
    */
    cout << "B: \n";
    cout << "    8\n";
    cout << "      \\\n";
    cout << "       2\n";
    cout << "         \\  \n";
    cout << "          3\n"; 
    
    
    isTrue = true;
    h = balanced(B, isTrue);
    if(isTrue) cout << "It is a Balanced Binary Tree\n";
    else cout << "Not a Balanced Binary Tree\n";
    return 0;
}