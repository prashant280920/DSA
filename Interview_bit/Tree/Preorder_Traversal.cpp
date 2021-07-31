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
    cout << "        1\n";
    cout << "       /  \\\n";
    cout << "      6    2\n";
    cout << "       \\  /\n";
    cout << "       5 3\n"; 
    
    vector<int> ans;
    preOrder(A,ans);
    cout << "Recursive Solution: \n";
    for(auto i: ans) cout << i<< " ";
    cout << "\n";

    stack<TreeNode* > s;
    ans = {};
    while(s.size() || A!=NULL){
        if(A!=NULL){
            ans.push_back(A->val);
            s.push(A);
            A = A->left;
        }else{
            A = s.top()->right;
            s.pop();
        }
        
    }
    cout << "Iterative Solution: \n";
    for(auto i: ans) cout << i<< " ";
    cout << "\n";
    return 0;
}