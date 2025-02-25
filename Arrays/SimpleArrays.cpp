#include <iostream>
using namespace std;
int main(){
    // Array declaration types
    int arr1[] = {33,22,43};
    int arr2[5] = {6,7,8};
    cout << arr2[4] << endl; // Default value of data type
    // What is the formula for dynamic size of an array?
    int size = sizeof(arr1) / sizeof(arr1[0]); // 4x8=32/4=8
    for(int i=0; i<size; i++){
        cout << arr1[i] << " ";
    }cout << endl;
    for(int x : arr1){
        cout << x << " ";
    }cout << endl;
    // auto : iterator
    for(auto y : arr2){
        cout << y << " ";
    }cout << endl;

    cout << *(arr1+1) << endl;
    return 0;
}