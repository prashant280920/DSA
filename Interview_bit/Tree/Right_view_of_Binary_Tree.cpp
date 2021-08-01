#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

vector<int> solve(TreeNode* A){
    queue<TreeNode*> q1, q2;
    if(A==NULL) return vector<int> ();
    vector<int> ans;
    q1.push(A);
    while(!q1.empty() || !q2.empty()){
        
        while(!q1.empty()){
            if(q1.size()==1){
                ans.push_back(q1.front()->val);
            }
            TreeNode* temp = q1.front();
            if(temp->left) q2.push(temp->left);
            if(temp->right) q2.push(temp->right); 
            q1.pop();
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    return ans;
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
    
    vector<int> ans = solve(A);
    for(auto i: ans) cout << i<< " ";
    cout << "\n";

    TreeNode* B = new TreeNode(8);
    B->left = new TreeNode(2);
    B->right = new TreeNode(3);
    //B->right->right = new TreeNode(12);
    //B->right->right->left = new TreeNode(11);
    B->left->right = new TreeNode(4);
    //B->left->left = new TreeNode(1);
    B->left->right->right = new TreeNode(5);
    //B->left->right->left = new TreeNode(5);
    
    /*
            8
          /   \
         2      3
          \       
           4      
            \    
             5  
    */
    cout << "            8\n";
    cout << "          /   \\\n";
    cout << "         2     3\n";
    cout << "          \\       \n";
    cout << "           4      \n"; 
    cout << "            \\    \n"; 
    cout << "             5  \n";

    ans = solve(B);
    for(auto i: ans) cout << i<< " ";
    cout << "\n";

    return 0;
}