#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = 0;
    for(int i=0; i<size; i++){
        result = result ^ arr[i];
    }
    cout << "The non-repeating element is: " << result
    << endl;
    return 0;
}