#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

void traverse(TreeNode* A, long int asf, long int &sum,int count){
    if(A->left==NULL && A->right==NULL){
        asf = (asf*10)+A->val;
        asf%=1003;
        sum+=asf;
        sum%=1003;
        return;
    }

    asf = (asf*10)+A->val;
    asf%=1003;
    if(A->left) traverse(A->left, asf, sum, count+1);
    if(A->right) traverse(A->right, asf, sum, count+1);
    
}

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
    long int asf=0, sum=0;
    traverse(A,asf,sum,0);
    cout << "Sum%1003: "<< sum<<endl;
    return 0;
}