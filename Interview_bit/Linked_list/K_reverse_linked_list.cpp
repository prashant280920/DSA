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

ListNode* reverseList(ListNode* A, int B) {
    if(A==NULL) return A;
    ListNode* temp = A;
    for(int i=0; i<B-1; i++) temp = temp->next;
    ListNode* C = reverseList(temp->next, B);
    temp->next = NULL;
    ListNode *cur = A, *next, *prev = NULL;
    ListNode* last  = A;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    ListNode* head = prev;
    last->next = C; 
    return head;
}

int main(){
    ListNode* A = NULL;
    int n,B;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> B;
        append(&A,B);
    }
    cin >> B;
    cout << "Input List: ";
    print(A);
    
    cout << "Output List: \n";
    print(reverseList(A, B));
    return 1;
}