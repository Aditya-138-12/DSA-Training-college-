#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Stack {
    private:
    int arr[MAX_SIZE];
    int top;
    public:
    Stack(){
        top = -1;
    }
    void push(int element){
        if(top == MAX_SIZE - 1){
            cout << "Stack Overflow." << endl;
        }
        top++;
        arr[top] = element;
        cout << "Pushed " << element << " into the stack." << endl;
    }
    void pop(){
        if(top == -1){
            cout << "Stack Underflow." << endl;
        }else{
            top--;
        }
    }
    int peek(){
        if(top == -1){
            cout << "Stack Underflow." << endl;
            return -1; // Invalid
        }else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top == -1;
    }
    int size(){
        return top+1;
    }
    void display(){
        cout << "The elements of the stack are: ";
        for(int i=top; i>=0; i--){
            cout << arr[i] << " ";    
        }
        cout << endl;
    }
};
int main(){
    Stack stack = Stack();
    // Stack stack1;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        stack.push(arr[i]);
    }
    stack.display();
    cout << "Top element of the stack: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element of the stack: " << stack.peek() << endl;
    cout << stack.isEmpty() << endl;
    cout << "Size of the stack: " << stack.size() << endl;
    stack.display();
    return 0;
}