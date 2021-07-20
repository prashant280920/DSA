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
    
    ListNode* E = A;
    ListNode* odd = NULL;
    ListNode* even = NULL;
    ListNode* tempOdd = NULL;
    ListNode* tempEven = NULL;
    int count=1;
    if(A==NULL || A->next == NULL){
        print(A);
        return 0;
    }
    while(A){
        if(count%2==1){
            
            if(count == 1){
                odd = A;
                tempOdd = A;
            }
            else{
                tempOdd->next = A;
                tempOdd = tempOdd->next;
                //tempOdd->next = NULL;
            }
            //cout <<"O" <<tempOdd->val<<" ";
            A=A->next;
            //cout <<"Od" <<A->val<<" ";
            
        }else{
            tempEven = A;
            A=A->next;
            
            tempEven->next = even;
            even = tempEven;
        }
        count++;
    }
    tempOdd->next = NULL;

    tempOdd = odd;
    E = odd;
    count = 1;
    while(tempOdd->next){
        //cout<<odd->val<<" "<<even->val<<"tr\n";
        if(count%2){
            odd = odd->next;
            tempOdd->next = even;
            
            //cout<<odd->val<<" "<<tempOdd->val<<"o\n";
        }else{
            even = even->next;
            tempOdd->next = odd;
            //cout<<even->val<<" "<<tempOdd->val<<"e\n";
        }
        tempOdd = tempOdd->next;
        count++;
    }
    
    if(count%2){
        tempOdd->next = even;
        tempOdd->next->next = NULL;
    }else{
        tempOdd->next = odd;
        tempOdd->next->next = NULL;
    }

    cout << "Output List: \n";
    print(E);


    return 0;
}