#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void Inorder(TreeNode* A, int B, bool &istrue, unordered_set<int> &s){
    if(istrue) return;
    if(A==NULL) return;
    if(s.find(B-A->val)!=s.end()){
        istrue = true;
    }else{
        s.insert(A->val);
    }
    Inorder(A->left, B, istrue, s);
    Inorder(A->right, B, istrue, s);
}

int main(){
    TreeNode* A = new TreeNode(11);
    A->left = new TreeNode(2);
    A->right = new TreeNode(13);
    A->right->right = new TreeNode(15);
    A->right->left = new TreeNode(12);
    //A->right->right->left = new TreeNode(11);
    A->left->right = new TreeNode(3);
    A->left->left = new TreeNode(1);
    //A->left->right->right = new TreeNode(7);
    //A->left->right->left = new TreeNode(5);
    
    /*
            11
          /   \
         2      13
        / \    / \
       1   3  12   15
    */
    cout << "A: \n";
    cout << "            11\n";
    cout << "          /   \\\n";
    cout << "         2      13\n";
    cout << "        / \\   /  \\\n";
    cout << "       1   3  12    15\n"; 
    // cout << "          / \\    /\n"; 
    // cout << "         5   7  11\n"; 
    int B;
    cin >>B;
    unordered_set<int> s;
    bool istrue = false;
    Inorder(A,B,istrue, s);
    cout << istrue << endl;

    return 0;
}