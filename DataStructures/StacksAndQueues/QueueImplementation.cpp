#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
    private:
    int arr[MAX_SIZE];
    int front;
    int rear;
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    bool isFull(){
        return (rear == MAX_SIZE - 1);
    }
    // enqueue() -> adding items, dequeue() -> deleting items 
    void enqueue(int item){
        if(isFull()){
            cout << "Queue is full. Can't add more items." << endl;
        }
        if(isEmpty()){
            front = rear = 0;
        }else{
            rear++;
        }
        arr[rear] = item;
        cout << "Enqueued item: " << item << " to queue." << endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout << "Empty queue. Can't delete items." << endl;
        }else if(front == rear) { // single element
             front = rear = -1;   
        }else{
            front++;
        }
    }
    int peek(){ // Display the front element
        if(isEmpty()){
            cout << "Empty queue. Can't display front." << endl;
            return -1;
        }else{
            return arr[front];        
        }
    }
    void display(){
        if(isEmpty()){
            cout << "Empty queue. Can't display." << endl;
            return;
        }
        cout << "The items of the queue are: ";
        for(int i=front; i<=rear; i++){
            cout << arr[i] << " "; 
        }cout << endl;
    }
    int size(){
        return rear;
    }

};
int main(){
    Queue queue;
    int arr[] = {4,2,1,3,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size; i++){
        queue.enqueue(arr[i]);
    }
    queue.display();
    queue.dequeue();
    queue.display();
    cout << "Front element: " << queue.peek() << endl;
    cout << "Size of the queue: " << queue.size() << endl;
    return 0;
}