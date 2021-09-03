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

ListNode* add(ListNode* A, int n, ListNode* B, int m){
    ListNode* tempA = A, *tempB = B;
    int carry = 0;
    for(int i=0; i<m; i++){
        int sum = tempA->val + tempB->val + carry;
        tempA->val = sum%10;
        carry = sum/10;
        n--;
        tempA=tempA->next; tempB = tempB->next;
    }

    ListNode* prev = NULL;
    for(int i=0; i<n; i++){
        prev = tempA;
        int sum = tempA->val+carry;
        tempA->val = sum%10;
        carry = sum/10;
        tempA=tempA->next; //tempB = tempB->next;
    }
    if(carry){
        prev->next = new ListNode(carry);
    }
    print(A);
    return A;
    
}

int main(){
    ListNode* A = NULL, *B = NULL;
    int n,s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&A,s);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        append(&B,s);
    }

    cout << "Input List A: ";
    print(A);
    cout << "Input List B: ";
    print(B);
    n = 0;
    int  m = 0;
    ListNode *tempA = A, *tempB = B;
    while(tempA){
        n++;
        tempA = tempA->next;
    }
    while(tempB){
        m++;
        tempB = tempB->next;
    }
    if(n>=m){
       cout << "Output List: \n";
       print(add(A,n, B, m));
    } 
    else{
        cout << "Output List: \n";
        print(add(B,m,A,n));
    } 
   
    
    return 1;
}