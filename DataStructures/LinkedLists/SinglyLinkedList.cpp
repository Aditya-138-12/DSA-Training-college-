#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};
void printListElements(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data << "->";
        current = current->next;
    }
    cout << "null" << endl;
}

// Insert operations in a Singly Linked List
void insertAtFront(Node** head, int newValue){
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = *head;
    *head = newNode;
}
void insertAtTail(Node** head, int newValue){
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    // Empty list:
    if(*head == nullptr){
        *head = newNode;
        return; // return the new head 
    }
    // List with multiple nodes?
    // Find the last node
    Node* last = *head;
    while(last->next != nullptr){
        last = last->next;
    }
    // Add the new node at the end of last node
    last->next = newNode;
}
void insertAfterSpecific(Node* previous, int newValue){
    if(previous == nullptr){
        cout << "Previous node cannot be null." << endl;
        return;
    }
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = previous->next;
    previous->next = newNode;
}
void deleteFrontNode(Node** head){
    // Empty
    if(*head == nullptr){
        cout << "Empty list, can't delete head." << endl;
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}
void deleteEndNode(Node** head){
    // Empty
    if(*head == nullptr){
        cout << "Empty list, can't delete tail." << endl;
        return;
    }
    // Single element
    if((*head)->next == nullptr){
        delete *head;
        *head = nullptr;
        return;
    }
    // Multiple nodes:
    Node* last = *head;
    Node* secondLast = nullptr;
    while(last->next != nullptr){
        secondLast = last;
        last = last->next;
    }
    delete last;
    secondLast->next = nullptr;
}
void deleteSpecificNodeWithTargetValue
(Node** head, int target){
    // Empty
    if(*head == nullptr){
        cout << "Empty list, can't delete target." << endl;
        return;
    }
    // target is the head itself
    if((*head)->data == target){
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return; 
    }
    Node* curr = *head;
    Node* prev = nullptr;
    while(curr != nullptr && curr->data != target){
        prev = curr;
        curr = curr->next;
    }
    if(curr == nullptr){
        cout << "Target doesn't exist." << endl;
    }
    prev->next = curr->next;
    delete curr;
}
int main(){

    // Manual creation of a linked list: 1->2->3->null
    // Node* head = new Node();
    // head->data = 1;
    // Node* second = new Node();
    // second->data = 2;
    // Node* third = new Node();
    // third->data = 3;
    // head->next = second;
    // second->next = third;
    // third->next = nullptr;

    Node* head = nullptr;
    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 0);
    printListElements(head);
    int arr1[] = {-1,-2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    for(int i=0; i<size1; i++){
        insertAtFront(&head, arr1[i]);
    }

    int arr2[] = {4,5,6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    for(int i=0; i<size2; i++){
        insertAtTail(&head, arr2[i]);
    }
    printListElements(head);
    insertAfterSpecific(head, 100);
    printListElements(head);

    cout << "List before deleting head: ";
    printListElements(head);
    deleteFrontNode(&head); 
    cout << "List after deleting head: ";
    printListElements(head);

    cout << "List before deleting tail: ";
    printListElements(head);
    deleteEndNode(&head); 
    cout << "List after deleting tail: ";
    printListElements(head);
    int target;
    cout << "Enter a target node to delete: ";
    cin >> target;
    deleteSpecificNodeWithTargetValue(&head, target);
    printListElements(head);
    return 0;
}