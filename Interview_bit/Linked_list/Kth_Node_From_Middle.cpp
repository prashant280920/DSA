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
    
    int count = 1;
    ListNode *slow = A;
    ListNode* fast = A;
    // if(fast->next->next==NULL){
    //     count++;
    // }
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        count++;
    }
    
    count = count - B;
    if(count<=0){
        cout << -1<<endl;
        return -1;
    }
    
    while(count-1){
        A = A->next;
        count--;
    }
    cout << A->val<<endl;
    
    return 0;
}