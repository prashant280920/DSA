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
 
ListNode *reverseList(ListNode *head) {
    if (head == NULL) return head; 
    ListNode *cur = head, *nextNode, *prevNode;
    prevNode = NULL;

    while (cur != NULL) {
        nextNode = cur->next;
        cur->next = prevNode;
        prevNode = cur;
        cur = nextNode;
    }

    head = prevNode;
    return head;
}
    

int main(){
    ListNode* A = NULL;
    int n,s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&A,s);
    }
    cout << "Input List: ";
    print(A);
    cout << "Reversed List: ";
    print(reverseList(A));
    return 0;
   
}