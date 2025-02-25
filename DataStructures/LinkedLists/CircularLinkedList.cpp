#include <iostream>
using namespace std;
// Singly Circular Linked List
class Node{
    public:
    int data;
    Node* next;
};
void printListElements(Node* head){
    if(head == nullptr){
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    do{
        cout << temp->data << "->";
        temp = temp->next; 
    }while(temp != head);
    cout << "head" << endl; 
}
void insertAtFront(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->data = newValue;
    if(*head == nullptr){
        newNode->next = newNode; // Points to itself
        *head = newNode;
        return;
    }
    Node* last = *head;
    while(last->next != *head){
        last = last->next;
    }
    newNode->next = *head;
    last->next = newNode;
    *head = newNode;
}
void insertAtEnd(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->data = newValue;
    if(*head == nullptr){
        newNode->next = newNode; // Points to itself
        *head = newNode;
        return;
    }
    Node* last = *head;
    while(last->next != *head){
        last = last->next;
    }
    last->next = newNode;
    newNode->next = *head;
}
void insertAfterSpecific(Node* previous, int newValue){
    if(previous == nullptr){
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = previous->next;
    previous->next = newNode;
}
void deleteFrontNode(Node** head){
    // Empty
    if(*head == nullptr){
        cout << "List is empty. Can't delete head." << endl;
        return;
    }
    Node* temp = *head;
    // Single element
    if((*head)->next == *head){
        delete *head;
        *head = nullptr;
        return;
    }
    // Multiple elements
    Node* last = *head;
    while(last->next != *head){
        last = last->next;
    }
    *head = (*head)->next;
    last->next = *head;
    delete temp;
}
void deleteEndNode(Node** head){
    // Empty
    if(*head == nullptr){
        cout << "List is empty. Can't delete head." << endl;
        return;
    }
    // Single element
    if((*head)->next == *head){
        delete *head;
        *head = nullptr;
        return;
    }
    Node* last = (*head)->next;
    Node* secondLast = *head;
    while(last->next != *head){
        secondLast = last;
        last = last->next;
    }
    secondLast->next = *head;
    delete last;
}
int main(){
    Node* head = nullptr;
    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 0);
    printListElements(head);

    int arr[] = {4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        insertAtEnd(&head, arr[i]);
    }
    insertAfterSpecific(nullptr, 1);
    insertAfterSpecific(head, 1);
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
    return 0;
}