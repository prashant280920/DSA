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
    cin >> B;
    cout << "Input List: ";
    print(A);
    ListNode dummy1(0);
    ListNode* zero = &dummy1;
    ListNode dummy2(0);
    ListNode* one = &dummy2;
    
    while(A){
        if(A->val < B){
            zero->next = A;
            zero = zero->next;
            A = A->next;
        }
        else {
            one->next = A;
            one = one->next;
            A = A->next;
        }
    }
    one->next = NULL;
    zero->next = dummy2.next;
    cout << "Output List: ";
    print(dummy1.next);

    return 0;
}