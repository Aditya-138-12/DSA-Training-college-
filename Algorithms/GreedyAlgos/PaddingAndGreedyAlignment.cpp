#include <iostream>
using namespace std;
class SJCIT {
    double d; // 8 bytes
    int i; // 4 bytes 
    short s; // 2 bytes
    char c; // 1 byte
};
int main(){
    // By default a class has 1 byte of memory
    SJCIT obj;
    cout << "Size of the class: "
    << sizeof(obj) << " Bytes." << endl;
    // In greedy alignment we always arrange the
    // datatypes in larger to smaller size order
    return 0;
}