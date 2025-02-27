#include <iostream>
#include <stack>
using namespace std;
void printStackElements(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop(); 
    }
    cout << endl;
}
int main(){
    // push, pop, top, empty, size
    // Display -> Not available
    stack<int> numbers;
    numbers.push(1);
    numbers.push(11);
    numbers.push(21);
    numbers.push(13);
    numbers.push(17);
    cout << "Stack elements are: ";
    printStackElements(numbers);
    cout << "Top of the stack: " << numbers.top() << "\n";
    numbers.pop();
    cout << "Top of the stack: " << numbers.top() << "\n";
    cout << "Stack size: " << numbers.size() << endl;
    cout << numbers.empty() << endl;
    return 0;
}