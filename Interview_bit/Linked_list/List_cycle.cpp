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
   
    append(&A, 20);
    append(&A, 4);
    append(&A, 15);
    append(&A, 10);
    A->next->next->next->next = A;
    
    cout <<" ________________\n";
    cout <<"|                |\n";
    cout <<"\\/               |\n";
    cout <<"20 -> 4 -> 15 -> 10\n"; 
    ListNode* slow = A;
    ListNode* fast = A;
   
    while(fast && fast->next ){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) break;
    }
    if(slow!= fast ){
        cout << "NULL"<<endl;
        return 0;
    }
    fast = A;
    while(slow!=fast){
        slow=slow->next;
        fast = fast->next;
    }
    cout<< slow->val<<endl;
    return 0;
}