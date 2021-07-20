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
    ListNode* B = NULL;
    int n,s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&A,s);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&B,s);
    }
    cout << "Input List 1: ";
    print(A);
    cout << "Input List 2: ";
    print(B);
    ListNode* temp = new ListNode(-1);
    ListNode* C = temp;
    while(A && B){
        if(A->val<B->val){
            temp->next = A;
            temp = temp->next;
            A = A->next;
        }else{
            temp->next = B;
            temp = temp->next;
            B = B->next;
        }
    }
    if(B){
        temp->next = B;
    }
    if(A){
        temp->next = A;
    }
    cout << "Output List: ";
    print(C->next);    
    return 0;
}