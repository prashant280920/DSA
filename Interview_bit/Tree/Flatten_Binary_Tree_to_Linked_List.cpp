#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void preOrder(TreeNode* A, queue<TreeNode*> &q){
    if(A==NULL) return;
    q.push(A);
    preOrder(A->left, q);
    preOrder(A->right, q);
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
    
    cout << "After Flatten: \n";
    queue<TreeNode* > q;
    preOrder(A, q);
    if(q.empty()){
        cout << "NULL" << endl;
        // return NULL;
    } 
    TreeNode* head = q.front();
    q.pop();
    TreeNode* root = head;
    while(!q.empty()){
        head->right = q.front();
        q.pop();
        head->left = NULL;
        head = head->right;
    }
    //return root;
    while(root){
        cout << root->val << "->";
        root = root->right;
    }
    cout << "NULL" << endl;
    return 0;
}