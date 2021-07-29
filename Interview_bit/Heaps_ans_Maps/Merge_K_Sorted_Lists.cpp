#include<bits/stdc++.h>
using namespace std;


class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
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
    int n;
    cin >> n;
    vector<ListNode*> A;
    for(int i=0; i<n; i++){
        ListNode* temp = NULL;
        int t,B;
        cin >> t;
        for(int i=0; i<t; i++){
            cin >> B;
            append(&temp,B);
        }
        A.push_back(temp);
    }
    priority_queue<int,vector<int>, greater<int>> q;
    n = A.size();
    for(int i=0; i<n; i++){
        ListNode *temp = A[i];
        while(temp){
            q.push(temp->val);
            temp = temp->next;
        }
    }
    ListNode dumy(-2);
    ListNode* ptr = &dumy;
    while(!q.empty()){
        ListNode* temp = new ListNode(q.top());
        q.pop();
        ptr->next = temp;
        ptr = ptr->next;
    }
    cout << "Output List: ";
    print(dumy.next);
    
    return 0;
}