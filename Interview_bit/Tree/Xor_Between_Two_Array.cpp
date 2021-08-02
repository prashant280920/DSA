#include<bits/stdc++.h>
using namespace std;

class trie {
    public: 
    trie* left;
    trie* right;
};

void Insert(trie* head, int n){
    trie* root = head;
    for(int i=31; i>=0; i--){
        int b = 1&(n>>i);
        if(b){
            if(!root->right) root->right = new trie();
            root = root->right;
        }else{
            if(!root->left) root->left = new trie();
            root = root->left;
        }
    }
}

int Max_XOR(trie* head, vector<int> B){
    int n = B.size();
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        int curr = B[i], curr_xor = 0;
        trie* root = head;
        for(int j = 31; j>=0; j--){
            int b = (curr>>j)&1;
            if(b){
                if(root->left){
                    root = root->left;
                    curr_xor+=pow(2,j);
                } 
                else  root = root->right;

            }else{
                if(root->right){
                    curr_xor+=pow(2,j);
                    root = root->right;
                }else root = root->left;
            }
        }
        maxi = max(curr_xor,maxi);
    }
    return maxi;
}


int main(){
    int n, s;
    cin >> n;
    vector<int> A, B;
    for(int i=0; i<n; i++){
        cin >> s;
        A.push_back(s);
    }
    for(int i=0; i<n; i++){
        cin >> s;
        B.push_back(s);
    }
    n = A.size();
    trie* head = new trie();
    for(int i=0; i<n; i++) Insert(head, A[i]);
    cout << Max_XOR(head, B)<< endl;
    return 0;
}