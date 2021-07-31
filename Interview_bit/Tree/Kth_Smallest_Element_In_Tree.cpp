#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};
void inorder(TreeNode* A, int B ,int &count, int &ans){
    if(A==NULL) return;
    
    inorder(A->left,B, count, ans );
    count++;
    if(count == B){
        ans = A->val;
        return;
    }
    inorder(A->right,B, count, ans );
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
    cout << "Enter k: ";
    cin >> B;
    int count =0, ans=0;
    inorder(A,B,count, ans);
    cout << "Kth smallest element: "<< ans << endl;
    return 0;
}