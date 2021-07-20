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
    //cin >> B;
    cout << "Input List: ";
    print(A);
    
   ListNode *B = A;
    A = A->next;
    B->next = NULL;
    while(A){
        ListNode* temp = B;
        ListNode* next = A->next;
        
        if(temp == B && temp->val>=A->val){
            A->next = temp;
            B = A;
        }else{
            while(temp){
                if(temp->next!=NULL && temp->next->val>A->val){
                    A->next = temp->next;
                    temp->next = A;
                    break;
                }else if(temp->next==NULL){
                    A->next = NULL;
                    temp->next = A;
                    break;
                }
                temp = temp->next;
            }
        }
        A = next;
    }
    cout << "After Insertion Sort: ";
    print(B);
    return 0;
}