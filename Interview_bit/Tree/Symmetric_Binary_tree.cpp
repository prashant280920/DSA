#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

bool Symemetric(TreeNode* A, TreeNode* B){
    if(A && !B) return 0;
    if(B && !A) return 0;
    if(!A && !B) return 1;
    if( A->val!= B->val) return 0;
    return (Symemetric(A->left, B->right) && Symemetric(A->right, B->left));
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
    
    if(A==NULL){
        cout << "Symmetric\n";
        return 1;
    }
    if(Symemetric(A->left, A->right)) cout << "Symmetric\n";
    else cout << "Not Symmetric\n";

    TreeNode* B = new TreeNode(8);
    B->left = new TreeNode(2);
    B->right = new TreeNode(2);
    B->right->right = new TreeNode(3);
    //B->right->right->left = new TreeNode(11);
    B->left->right = new TreeNode(3);
    //B->left->left = new TreeNode(1);
    //B->left->right->right = new TreeNode(5);
    //B->left->right->left = new TreeNode(5);
    
    /*
            8
          /   \
         2      2
          \      \ 
           3      3 
    */
    cout << "B: \n";
    cout << "            8\n";
    cout << "          /   \\\n";
    cout << "         2     2\n";
    cout << "          \\     \\  \n";
    cout << "           3      3\n"; 
    
    if(B==NULL){
        cout << "Symmetric\n";
        return 1;
    }
    if(Symemetric(B->left, B->right)) cout << "Symmetric\n";
    else cout << "Not Symmetric\n";
    return 0;
}