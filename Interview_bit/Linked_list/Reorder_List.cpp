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


ListNode* reverse(ListNode* A){
    ListNode* prev = NULL;
    ListNode* cur = A;
    ListNode* next;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}


int main(){
    ListNode* A = NULL;
    int n,B;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> B;
        append(&A,B);
    }
    // cin >> B;
    // int C;
    // cin >> C;
    cout << "Input List: ";
    print(A);
        ListNode* temp = A;
    int len = 0;
    while(temp){
        len++;
        temp = temp->next;
    }
    int m = len/2;
    if(len%2!=0) m+=1;
    ListNode* prev = NULL;
    ListNode* mid = A;
    for(int i=0; i<m; i++){
        prev = mid;
        mid = mid->next;
    }
    ListNode dummy(0);
    ListNode* p = &dummy;
    prev->next = NULL;
    ListNode* C = reverse(mid);
    for(int i=0; i<m; i++){
        if(A!=NULL){
            p->next = A;
            A=A->next;
            p = p->next;
        } 
        if(C!=NULL){
            p->next = C;
            C = C->next;
            p = p->next;
        }
        
    }
    if(A) p->next = A;
   
    cout << "Output List: \n";
    print(dummy.next);
    return 1;
}