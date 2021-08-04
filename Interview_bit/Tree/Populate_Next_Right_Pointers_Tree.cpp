#include<bits/stdc++.h>
using namespace std;

class TreeLinkNode{
    public:
    int val;
    TreeLinkNode* left;
    TreeLinkNode* right;
    TreeLinkNode* next;
    TreeLinkNode(int x): val(x), left(NULL), right(NULL), next(NULL){}
};



int main(){
    TreeLinkNode* A = new TreeLinkNode(11);
    A->left = new TreeLinkNode(2);
    A->right = new TreeLinkNode(13);
    A->right->right = new TreeLinkNode(15);
    A->right->left = new TreeLinkNode(12);
    //A->right->right->left = new TreeLinkNode(11);
    A->left->right = new TreeLinkNode(3);
    A->left->left = new TreeLinkNode(1);
    //A->left->right->right = new TreeLinkNode(7);
    //A->left->right->left = new TreeLinkNode(5);
    
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
    queue<TreeLinkNode*> q;
    if(A==NULL){
        //return;
        return 0;
    }
    q.push(A);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            TreeLinkNode* temp = q.front();
            q.pop();
            if(i!=(n-1)) temp->next = q.front();
            else temp->next = NULL;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    // this is just to show the output;
    queue<TreeLinkNode*> out;
    out.push(A);
    while(!out.empty()){
        TreeLinkNode* temp = out.front();
        
        while(temp){
            cout << temp->val<<"->";
            temp = temp->next;
        }
        cout <<"NULL\n";
        temp = out.front();
        out.pop();
        if(temp->left) out.push(temp->left);
        else if(temp->right) out.push(temp->right);
    }
    return 0;
}