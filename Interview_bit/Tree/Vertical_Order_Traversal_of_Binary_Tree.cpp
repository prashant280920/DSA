#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

// Note: it was Level order traversal not preorder, mentioned wrong in the question

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

    map<int ,vector<int>> m;
    
    //if(A==NULL) return vector<vector<int>> ();
    int hd = 0;
    queue<pair<TreeNode* , int>> q;
    q.push({A,hd});
    while(!q.empty()){
        pair<TreeNode*, int> p = q.front();
        q.pop();
        m[p.second].push_back(p.first->val);
        hd = p.second;
        if(p.first->left) q.push({p.first->left,hd-1});
        if(p.first->right) q.push({p.first->right,hd+1});
    }
    vector<vector<int>> ans;
    for(auto it = m.begin(); it!=m.end(); it++){
        ans.push_back(it->second);
    }
    int n = ans.size();
    for(int i=0; i<n; i++){
        for(auto j : ans[i]) cout << j <<" ";
        cout <<"\n";
    }
    return 0;
}