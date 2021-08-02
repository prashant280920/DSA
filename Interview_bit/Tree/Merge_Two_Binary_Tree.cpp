#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void Traverse(TreeNode* A, int index, map<int,int> &m){
    if(A==NULL) return;
    Traverse(A->left, 2*index+1,m);
    m[index]+=A->val;
    Traverse(A->right, 2*index+2,m);
}

TreeNode* CreateTree(int index, map<int, int> &m){
    TreeNode* node = NULL;
    if(m.find(index)!=m.end()){
        node = new TreeNode(m[index]);
    }else{
        return NULL;
    }

    node->left = CreateTree(2*index+1, m);
    node->right = CreateTree(2*index+2, m);
    return node;
}
void preOrder(TreeNode* A){
    if(A==NULL){
        cout << -1 << " ";
        return;
    }
    
    cout << A->val<<" ";
    preOrder(A->left);
    //ans.push_back(A->val);
    preOrder(A->right);
}

TreeNode* Method2(TreeNode* A, TreeNode* B){
    if(A && !B) return A;
    if(!A && B) return B;
    if(A && B){
        A->val += B->val;
        A->left = Method2(A->left, B->left);
        A->right = Method2(A->right, B->right);
    }
    return A;
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
    cout << "A: \n";
    cout << "            8\n";
    cout << "          /   \\\n";
    cout << "         2      9\n";
    cout << "        / \\      \\\n";
    cout << "       1   6      12\n"; 
    cout << "          / \\    /\n"; 
    cout << "         5   7  11\n"; 
    

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
    cout << "B: \n";
    cout << "            8\n";
    cout << "          /   \\\n";
    cout << "         2     3\n";
    cout << "          \\       \n";
    cout << "           4      \n"; 
    cout << "            \\    \n"; 
    cout << "             5  \n";

    // Method 1 : Using Hashing
    cout << "Method 1 : Using Hashing\nPreOrder: ";
    map<int, int> m;
    if(A==NULL && B==NULL){
        //return A;
        return 0;
    }
    Traverse(A,0,m);
    //for(auto i:m) cout << i.first << " "<< i.second
    Traverse(B,0,m);
    TreeNode* ans = CreateTree(0, m);
    preOrder(ans);
    cout << "\n";

    TreeNode* temp1 = A;
    TreeNode* temp2 = B;
    // Method 2: Using recursion and merge 
    cout << "Method 2: Using recursion and merge:\nPreOrder: ";
    ans = Method2(temp1, temp2);
    preOrder(ans);
    cout << "\n";
    return 0;
}