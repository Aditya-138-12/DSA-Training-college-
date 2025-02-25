#include <iostream>
using namespace std;
int main(){
    int * p, q, r; // 1st one is a pointer, second one is int variable
    int a = 10;
    cout << &a << endl;
    int * ptr = &a;
    cout << ptr << endl;
    // From the pointer, how do we get the value?
    cout << *ptr << endl; 
    int ** dPtr = &ptr; // Pointer to a pointer
    cout << &ptr << endl;
    cout << dPtr << endl;
    // From double pointer to get the value of a
    cout << **dPtr << endl;
    cout << *(&a) << endl;
    return 0;
}