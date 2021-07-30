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
    for(auto i: ans) cout << i<< " ";
    cout << endl;
    return 0;
}