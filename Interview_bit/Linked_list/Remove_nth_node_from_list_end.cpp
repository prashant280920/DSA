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
    int n,s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&A,s);
    }
    int B;
    cin >> B;
    cout << "Input List: ";
    print(A);
    
    ListNode* first = A;
    ListNode* second = A;
    for(int i=1; i<B; i++){
        //cout << 1;
        if(second == NULL || second->next==NULL){
            cout << "Output List: ";
            print(A->next);
            return 0;
        }
        second = second->next;  
    }
    ListNode* prev=first;
    while(second->next){
        prev = first;
        first = first->next;
        second = second->next;
    }
    if(first == A){
        cout << "Output List: ";
        print(A->next);
        return 0;
    }
    prev->next = first->next;
    first->next = NULL;
    
    cout << "Output List: ";
    print(A);
    return 0;
}