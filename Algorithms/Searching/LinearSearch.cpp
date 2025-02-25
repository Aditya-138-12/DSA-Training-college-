#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,1,3,8,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int index = linearSearch(arr, size, key);
    cout << "Key is present at index: " << index << endl;
    return 0;
}