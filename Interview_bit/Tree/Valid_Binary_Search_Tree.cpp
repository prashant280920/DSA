#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void inOrder(TreeNode* A,vector<long int> &ans){
    if(A==NULL) return;
    inOrder(A->left,ans);
    ans.push_back(A->val);
    inOrder(A->right,ans);
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
    vector<long int> ans;
    inOrder(A,ans);
    // B = ans;
    // sort(B.begin(),B.end())
    int n = ans.size();
    bool k = true;
    for(int i=0; i<n-1; i++){
        //cout << ans[i]<<"\n";
        if(ans[i]>=ans[i+1]){
            cout << "Not a BST\n"<<endl;
            k = false;
            break;
        } 
    }
    if(k) cout << "Valid BST\n" << endl;


    A = new TreeNode(2);
    A->left = new TreeNode(1);
    A->right = new TreeNode(3);
    /*
            2
           /  \
          1    3
    */
    cout << "        2\n";
    cout << "       /  \\\n";
    cout << "      1    3\n";

    ans = {};
    inOrder(A,ans);
    // B = ans;
    // sort(B.begin(),B.end())
    n = ans.size();
    k = true;
    for(int i=0; i<n-1; i++){
        //cout << ans[i]<<"\n";
        if(ans[i]>=ans[i+1]){
            cout << "Not a BST\n"<<endl;
            k = false;
            break;
        } 
    }
    if(k) cout << "Valid BST\n" << endl;

    return 0;
}