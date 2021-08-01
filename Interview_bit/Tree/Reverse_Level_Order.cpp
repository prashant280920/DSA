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
    
    vector<int> ans;
    queue<TreeNode* > q;
    if(A==NULL){
        //return vector<int> ();
        return 0;  
    } 
    q.push(A);
    while(q.size() ){
        ans.push_back(q.front()->val);
        TreeNode* temp = q.front();
        q.pop();
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
        

    } 
    reverse(ans.begin(), ans.end());
    for(auto i: ans) cout << i << " ";
    cout << endl;
    return 0;
}