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

ListNode* reverseList(ListNode *A){
    ListNode *prev=NULL;
    ListNode *curr=A;
    ListNode *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
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
    cin >> B;
    int C;
    cin >> C;
    cout << "Input List: ";
    print(A);
    if(B==C){
        print(A);
        return 0;
    } 
    ListNode *temp=A,*first=A,*last=A,*prev=NULL;
    int i=1;
    for(;i<B;i++){
     prev=temp;
     temp=temp->next;
    }
   
   first=temp;
   
    for(;i<C;i++)
     temp=temp->next;
    last=temp;
    
    ListNode* next=last->next;
    last->next=NULL;
    
    first=reverseList(first);
    
    if(prev!=NULL)prev->next=first;
    else A=first;
    temp=first;
    while(temp->next!=NULL)
     temp=temp->next;
    
    temp->next=next;

    cout << "Output List: \n";
    print(A);
    return 1;
}