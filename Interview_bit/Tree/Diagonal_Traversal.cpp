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

    queue<TreeNode* > s;
    vector<int> ans;
    while(s.size()!=0 || A!=NULL){
        
        if(A!=NULL){
            //cout << A->val;
            s.push(A);
            A = A->right;
        }else{
            ans.push_back(s.front()->val);
            A = s.front()->left;
            s.pop();
        }
        //cout << s.size();
    }
    cout << "\nDiagonal Traversal: ";
    for(auto i: ans) cout << i<<" ";
    cout << endl; 

    return 0;
}