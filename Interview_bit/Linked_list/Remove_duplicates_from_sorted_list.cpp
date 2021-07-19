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
    if(A==NULL || A->next==NULL){
        cout << "Output List: ";
        print(A);
        return 0;
    }
    ListNode* first = A;
    ListNode* second = first->next;
    while(second!=NULL){
        if(first->val == second->val){
            first->next = second->next;
            second = first->next;
        }else{
            first = first->next;
            second = first->next;
        }
        
    }
    //return A;
    cout << "Output List: ";
    print(A);

    return 0;
}