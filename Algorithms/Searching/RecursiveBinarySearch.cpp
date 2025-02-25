#include <iostream>
using namespace std;
int recursive_binary_search(int * arr, int n, int s, int e, int key){
    if(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            // Got to right side because start changes
            return recursive_binary_search(arr,n,mid+1,e,key);    
        }else{
            // Go to left side because end changes
            return recursive_binary_search(arr,n,s,mid-1,key);
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,9,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << recursive_binary_search(arr,size,0,size-1,91) << endl;
    return 0;
}