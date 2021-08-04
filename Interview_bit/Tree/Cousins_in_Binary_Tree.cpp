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
    queue<TreeNode*> q;
    if(A==NULL){
        //return vector<int> ();
        return 0;
    } 
    q.push(A);
    bool present = false;
    vector<int> ans;
    while(!q.empty()){
        if(present){
            while(!q.empty()){
                ans.push_back(q.front()->val);
                q.pop();
            }
        }else{
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left){
                    if(temp->left->val==B && !present){
                        present = true;
                        continue;
                    } 
                }
                if(temp->right){
                    if(temp->right->val==B && !present){
                        present = true;
                        continue;
                    } 
                }

                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            
        }
    }
    for(auto i: ans) cout << i << " ";
    cout << endl;

    return 0;
}