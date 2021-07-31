#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void Depth(TreeNode* A, int depth, int &maxi){
    if(A->left==NULL && A->right==NULL){
        maxi = max(maxi,depth);
    }
    if(A->left) Depth(A->left, depth+1,maxi);
    if(A->right) Depth(A->right, depth+1,maxi);
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
            1
          /   \
         4      2
        / \      \
       8   5      3
          / \    /
         9   7  6
    */
    cout << "            1\n";
    cout << "          /   \\\n";
    cout << "         4      2\n";
    cout << "        / \\      \\\n";
    cout << "       8   5      3\n"; 
    cout << "          / \\    /\n"; 
    cout << "         9   7  6\n"; 
    int maxi = -1;
    Depth(A,1,maxi);
    cout << "Max Depth: " << maxi << endl;
    return 0;
}