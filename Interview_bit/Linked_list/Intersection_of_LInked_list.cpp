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
    cout << "There are 3 lines in the input\nLine 1 ( Corresponds to arg 1 ) : Nodes in the non-overlapping part of the first linked list.\nFirst number S is the number of nodes.\nThen S numbers follow indicating the val in each of the nodes in sequence\nFor example, LinkedList: \"1 --> 2\" will be written as \"2 1 2\"(without quotes).\n\nLine 2 ( Corresponds to arg 2 ) : Nodes in the non-overlapping part of the second linked list. \nFirst number S is the number of nodes. \nThen S numbers follow indicating the val in each of the nodes in sequence";
	cout << "\nFor example, LinkedList: \"3 --> 4 --> 5\" will be written as \"3 3 4 5\"(without quotes).";

    cout << "\n\nLine 3 : Nodes in the overlapping part of both the linked list occurring as the suffix of the lists.\nFor example, LinkedList: \"8 --> 9 --> 7\" will be written as \"3 8 9 7\"(without quotes).\n\n";

    cout << "The lists are constructed by appending the overlapping nodes to the non-overlapping list.";
    cout << "\n\nEnter length of Non-Overlapping part of A:\n";
    cin >> n;
    cout << "Enter non-overlapping part of A\n";
    for(int i=0; i<n; i++){
        cin >> s;
        append(&A,s);
    }
    ListNode* B = NULL;
    cout << "\n\nEnter length of Non-Overlapping part of B:\n";
    cin >> n;
    cout << "Enter non-overlapping part of A\n";
    for(int i=0; i<n; i++){
        cin >> s;
        append(&B,s);
    }
    ListNode* C = NULL;
    cout << "Enter length of Overlapping part of A and B:\n";
    cin >> n;
    cout << "Enter overlapping part of A and B\n";
    for(int i=0; i<n; i++){
        cin >> s;
        append(&C,s);
    }
    ListNode* temp = A;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = C;
    temp = B;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = C;
    
    //cin >> B;
    cout << "Input List: \n";
    cout << "A: ";
    print(A);
    cout << "B: ";
    print(B); 
    int l1=0,l2=0;
    ListNode* temp1=A,*temp2=B;
 
    while(temp1!=NULL){
        l1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        l2++;
        temp2=temp2->next;
    }
 
    int step=abs(l2-l1);
 
    temp1=A;temp2=B;
 
 
    while(step--){
        if(l1<l2){
            if(temp2!=NULL)
            temp2=temp2->next;
            else {
                cout << "NULL";
                return 0;
            }
        }
        else{
            if(temp1!=NULL)
            temp1=temp1->next;
            else {
                cout << "NULL";
                return 0;
            }
        }
    }
 
    while(temp1!=NULL && temp2!=NULL){
 
        if(temp1==temp2){
                cout << "Node address: "<<temp<<" and node value is: "<< temp1->val<<"\n";
                return 1;
            }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return 0;
   
}