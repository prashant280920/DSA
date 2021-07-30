#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


void preOrder(TreeNode* A, vector<int> &ans){
    if(A==NULL) return;
    ans.push_back(A->val);
    preOrder(A->left,ans);
    preOrder(A->right,ans);
}

int main(){
    TreeNode* A = new TreeNode(1);
    A->left = new TreeNode(6);
    A->right = new TreeNode(2);
    A->right->left = new TreeNode(3);
    A->left->right = new TreeNode(5);
    
    /*
            1
           /  \
          6    2
           \  /
           5 3
    */

    vector<int> ans;
    preOrder(A,ans);
    
    for(auto i: ans) cout << i<< " ";
    cout << endl;
    return 0;
}