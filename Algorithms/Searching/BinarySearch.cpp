#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    while (s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            // Right side
            s = mid + 1;
        }else{
            // Left side
            e = mid -1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = binarySearch(arr,size,50);
    cout << index << endl;
    return 0;
}