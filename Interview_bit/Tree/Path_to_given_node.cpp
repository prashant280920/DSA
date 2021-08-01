#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void Path(TreeNode* A, int B, vector<int> temp, vector<int> &ans, bool &find){
    if(find) return;
    if(A->val == B){
        find = true;
        temp.push_back(A->val);
        ans = temp;
        return;
    }
    if(A->left==NULL && A->right == NULL) return;
    temp.push_back(A->val);
    if(A->left) Path(A->left,B, temp,ans, find);
    if(A->right) Path(A->right,B, temp,ans, find);
    temp.pop_back();
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
    cout << "Enter B: ";
    cin >> B;
    bool find = false;
    vector<int> ans, temp;
    Path(A,B, temp,ans, find);
    for(auto i: ans) cout << i << " ";
    cout << endl;
    return 0;
}