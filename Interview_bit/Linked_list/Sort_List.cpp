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

ListNode* merge(ListNode* A, ListNode* B){
    if(A==NULL) return B;
    if(B==NULL) return A;
    ListNode dumy(0);
    ListNode* res = &dumy;
    while(A!=NULL && B!=NULL){
        if(A->val > B->val){
            res->next = B;
            B = B->next;
        }else{
            res->next = A;
            A = A->next;
        }
        res = res->next;
    }
    if(A==NULL) res->next = B;
    if(B==NULL) res->next = A;
    return dumy.next;
}

ListNode* sortList(ListNode* A){
    if(A==NULL || A->next ==NULL) return A;
    ListNode* slow = A;
    ListNode* fast = A;
    ListNode* temp = slow;
    while(fast && fast->next){
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = NULL;
    ListNode* Left = sortList(A);
    ListNode* Right = sortList(slow);
    return merge(Left, Right);
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
    
    cout << "Output List: \n";
    print(sortList(A));


    return 0;
}