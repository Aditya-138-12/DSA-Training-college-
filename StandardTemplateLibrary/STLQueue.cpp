#include <iostream>
#include <queue>
using namespace std;
void printQueueElements(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop(); 
    }
    cout << endl;
}
int main(){
    // push, pop, front, back, empty, size
    queue<int> numbers;
    numbers.push(1);
    numbers.push(11);
    numbers.push(21);
    numbers.push(13);
    numbers.push(17);
    cout << "Queue elements: ";
    printQueueElements(numbers);
    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;
    cout << "Size of queue: " << numbers.size() << endl;
    numbers.pop();
    cout << "Front element: " << numbers.front() << endl;
    cout << "Size of queue: " << numbers.size() << endl;
    cout << "Queue elements: ";
    printQueueElements(numbers);
    return 0;
}