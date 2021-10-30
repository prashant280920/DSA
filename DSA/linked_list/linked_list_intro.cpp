#include <iostream>  
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;

	printList(head);

	return 0;
}

// This is code is contributed by rathbhupendra

// _______________________________________________________________________________________

// ADDING NEW ELEMENT AT THE BEGINING 

// 1) at begining ;

void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

// 2) in between

// Given a node prev_node, insert a
// new node after the given
// prev_node
void insertAfter(Node* prev_node, int new_data)
{

	// 1. Check if the given prev_node is NULL
	if (prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}

	// 2. Allocate new node
	Node* new_node = new Node();

	// 3. Put in the data
	new_node->data = new_data;

	// 4. Make next of new node as
	// next of prev_node
	new_node->next = prev_node->next;

	// 5. move the next of prev_node
	// as new_node
	prev_node->next = new_node;
}

// This code is contributed by anmolgautam818
  
// ----------------------------------------------
// deleting element 

#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node{
public:
    int data;
    Node* next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int, 
// inserts a new node on the front of the
// list. 
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Given a reference (pointer to pointer)
// to the head of a list and a key, deletes
// the first occurrence of key in linked list 
void deleteNode(Node** head_ref, int key)
{
    
    // Store head node
    Node* temp = *head_ref;
    Node* prev = NULL;
    
    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }

    // Else Search for the key to be deleted, 
    // keep track of the previous node as we
    // need to change 'prev->next' */
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;                                          // previous node ka link changing 

    // Free memory
    delete temp;
    }
}

// This function prints contents of
// linked list starting from the 
// given node 
void printList(Node* node)
{
    while (node != NULL) 
    {
        cout << node->data << " ";
        node = node->next;
    }
}

// Driver code
int main()
{
    
    // Start with the empty list 
    Node* head = NULL;

    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    
    printList(head);
    
    return 0;
}

// deleting the node at given position 

// Given a reference (pointer to pointer) to
// the head of a list and a position, deletes
// the node at the given position
void deleteNode(Node **head_ref, int position)
{
     
    // If linked list is empty
    if (*head_ref == NULL)
        return;
     
    // Store head node
    Node* temp = *head_ref;
 
    // If head needs to be removed
    if (position == 0)
    {
         
        // Change head
        *head_ref = temp->next;
         
        // Free old head
        free(temp);            
        return;
    }
 
    // Find previous node of the node to be deleted
    for(int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
 
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;
 
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
     Node *next = temp->next->next;
 
    // Unlink the node from linked list
    free(temp->next); // Free memory
     
    // Unlink the deleted node from list
    temp->next = next;
}
