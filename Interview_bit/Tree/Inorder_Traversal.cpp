#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void inorder(TreeNode* A, vector<int> &ans){
    if(A==NULL) return;
    
    inorder(A->left, ans);
    //cout << A->val;
    ans.push_back(A->val);
    inorder(A->right, ans);
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

    cout << "        1\n";
    cout << "       /  \\\n";
    cout << "      6    2\n";
    cout << "       \\  /\n";
    cout << "       5 3\n"; 
    TreeNode* B = A;
    stack<TreeNode* > s;
    vector<int> ans;
    while(s.size()!=0 || A!=NULL){
        if(A!=NULL){
            s.push(A);
            A = A->left;
        }else{
            ans.push_back(s.top()->val);
            A = s.top()->right;
            s.pop();
        }
    }
    cout << "Iterative Solution:\n";
    for(auto i: ans) cout << i<< " ";
    cout << endl;

    ans = {};
    inorder(B,ans);
    cout << "Recursive Solution:\n";
    for(auto i: ans) cout << i<< " ";
    cout << endl;
    
    return 0;
}