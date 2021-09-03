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

ListNode* alternate(ListNode* A, int B, int count){
    if(A==NULL) return A;
    ListNode* C = A;
    for(int i=0; i<B-1; i++) C = C->next; 
    ListNode* D = alternate(C->next, B, count+1);
    C->next = NULL;
    if(count%2){
        
        ListNode* prev = NULL;
        ListNode* cur = A;
        ListNode* next = A;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        ListNode* head = prev;
        A->next = D;
        return head;
    }else{
        C->next = D;
        return A;
    }

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
    print(alternate(A, B, 1));
    return 1;
}