#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


void inorder(TreeNode* A, TreeNode** first, TreeNode** middle, TreeNode** prev, TreeNode** last){
    //cout << "yo";
    if(A!=NULL){
        inorder(A->left, first, middle, prev, last);
        if(*prev && (*prev)->val > A->val){
            if(!*first){
                *first = *prev;
                *middle = A;
                //cout << (*first)->val << ' ' << (*middle)->val;
            }else{
                *last = A;
                //cout << "l" << (*last)->val;
            }
            //cout << "p"<<(*prev)->val;
        }
        *prev = A;
        inorder(A->right, first, middle, prev, last);
    }
}
int main(){
    //TreeNode* A = NULL;

    TreeNode* A = new TreeNode(1);
    A->left = new TreeNode(2);
    A->right = new TreeNode(3);
    /*
            1
           /  \
          2    3
    */
    cout << "        1\n";
    cout << "       /  \\\n";
    cout << "      2    3\n";

    TreeNode* first = NULL;
    TreeNode* middle = NULL;
    TreeNode* prev = NULL;
    TreeNode* last = NULL ;

    inorder(A, &first, &middle, &prev, &last);
    vector<int> ans;
    
    if(last){
        ans.push_back(first->val);
        ans.push_back(last->val);
    }else{
        ans.push_back(first->val);
        ans.push_back(middle->val);
    }
    sort(ans.begin(), ans.end());
    for(auto i: ans) cout << i<< " ";
    cout << endl;
    return 0;
}