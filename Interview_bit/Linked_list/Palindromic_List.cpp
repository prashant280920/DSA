#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL){}
};

void append(ListNode** head_ref, int new_data){
    ListNode* new_node = new ListNode(new_data);
    ListNode* last_node = *head_ref;

    if(last_node == NULL){
        *head_ref = new_node;
        return;
    }

    while(last_node->next!=NULL){
        last_node = last_node->next;
    }
    last_node->next = new_node;
    return;
}

void print(ListNode* head){
    while(head!=NULL){
        cout << head->val<<"->";
        head = head->next;
    }
    cout << "NULL" <<endl;
}


int main(){
    ListNode* A = NULL;
    int n,B;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> B;
        append(&A,B);
    }
    //cin >> B;
    cout << "Input List: ";
    print(A);
    
    stack<int> s;
    ListNode* temp = A;
    while(temp){
        s.push(temp->val);
        temp = temp->next;
    }

    while(A){
        if(A->val != s.top()){
            cout << "Not a Palindromic\n";
            return 0;
        }
        else s.pop();
        A=A->next;
    }

    cout << "List id Palindromic\n";
    return 1;
}