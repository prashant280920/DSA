#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void append(ListNode** head_ref, int new_data){
    ListNode* new_node = new ListNode(new_data);
    ListNode* last = *head_ref;
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while(last->next!=NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void printListNode(ListNode* head){
    while(head!=NULL){
        cout << head->val<<"->";
        head = head->next;

    }
    cout <<"NULL"<<endl;
}

int main(){
    int n,s;
    cin>>n;
    ListNode *A = NULL;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&A,s);
    }
    printListNode(A);
    int zero = 0, one = 0;
    ListNode *temp = A;
    while(temp != NULL){
        if(temp->val == 0){
            zero++;
        }else{
            one++;
        }
        temp = temp->next;
    }

    temp = A;
    while(zero){
        temp->val = 0;
        temp = temp->next;
        zero--;
    }
    while(one){
        temp->val = 1;
        temp = temp->next;
        one--;
    }
    
    printListNode(A);

    return 0;
}