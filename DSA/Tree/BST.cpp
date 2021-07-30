#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    public:
    TreeNode(): val(0), left(NULL), right(NULL){}
    TreeNode(int x): val(x), left(NULL), right(NULL){}
    bool SearchNode(TreeNode* root, int value);
    TreeNode* InsertNode(TreeNode* root, int value);
    void InOrder(TreeNode* root);
};

bool TreeNode::SearchNode(TreeNode* root, int value){
    if(root==NULL) return false;
    if(root->val==value) return true;
    if(root->val<value){
        return this->SearchNode(root->right, value);
    }else{
        return this->SearchNode(root->left, value);
    }
}

TreeNode* TreeNode::InsertNode(TreeNode* root, int value){
    if(root == NULL){
        return new TreeNode(value);
    }

    if(root->val<value){
        root->right = this->InsertNode(root->right, value);
    }else if(root->val>value){
        root->left = this->InsertNode(root->left, value);
    }
    return root;
}

void TreeNode::InOrder(TreeNode* root){
    if(!root) return;
    InOrder(root->left);
    cout << root->val<<" ";
    InOrder(root->right);
}


int main(){
    TreeNode bst, *root = NULL;
    int n,B;
    cout << "Enter Number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> B;
        if(i == 0) root = bst.InsertNode(root, B);
        else  bst.InsertNode(root, B);
    }
    
    
    
    char k;
    do{
        cout << "Enter elements you want to search: ";
        cin >> B;
        bool i = bst.SearchNode(root,B);
        if(i) cout << "Element Found !\n";
        if(!i) cout <<"Element Not Found\n";
        cout << "Press any key for search else press Y for exit: \n";
        
        cin >> k;
    }while(k != 'Y' && k!='y');
    
    cout << "-> Inordered Traversal of BST\n";
    bst.InOrder(root);
    cout <<"\n";
    return 0;
}