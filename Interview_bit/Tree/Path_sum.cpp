#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};
void PathSum(TreeNode* A,int B, long int asf, bool &sum){
    if(sum) return;
    if(A->left == NULL && A->right == NULL){
        asf+=A->val;
        if(asf == B) sum = true;
        return;
    }

    asf+=A->val;
    if(A->left) PathSum(A->left, B, asf, sum);
    if(A->right) PathSum(A->right, B, asf, sum);
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
    int B;
    cout << "Enter Sum: ";
    cin >> B;
    bool sum=false;
    PathSum(A,B,0,sum);
    cout << sum << endl;
    return 0;
}