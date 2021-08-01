#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


int main(){
    TreeNode* A = new TreeNode(8);
    A->left = new TreeNode(2);
    A->right = new TreeNode(9);
    A->right->right = new TreeNode(12);
    A->right->left = new TreeNode(17);
    A->right->right->left = new TreeNode(11);
    A->left->right = new TreeNode(6);
    A->left->left = new TreeNode(1);
    A->left->right->right = new TreeNode(7);
    A->left->right->left = new TreeNode(5);
    
    /*
            8
          /   \
         2      9
        / \    /  \
       1   6  17  12
          / \    /
         5   7  11
    */
    cout << "            8\n";
    cout << "          /   \\\n";
    cout << "         2      9\n";
    cout << "        / \\    /  \\\n";
    cout << "       1   6  17  12\n"; 
    cout << "          / \\    /\n"; 
    cout << "         5   7  11\n"; 
    
    queue<TreeNode*> q;
    if(A==NULL){
        //return vector<vector<int>> ();
        return 0;
    } 
    q.push(A);
    vector<vector<int>> ans;
    while(!q.empty()){
        int n = q.size();
        vector<int> temp;
        for(int i=0; i<n; i++){
            TreeNode* t = q.front();
            q.pop();
            temp.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        ans.push_back(temp);
    }
    int n = ans.size();
    for(int i=1; i<n; i+=2){
        reverse(ans[i].begin(), ans[i].end());
    }
    for(auto i: ans){
        for(auto j : i) cout << j << " ";
        cout << "\n";
    }

    return 0;
}