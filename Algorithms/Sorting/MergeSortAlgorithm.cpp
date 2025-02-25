#include <iostream>
using namespace std;
void merge(int * arr, int s, int e){
    int mid = (s+e)/2;
    int l1 = mid-s+1;
    int l2 = e-mid;
    // Create two arrays for copying the contents 
    // of the left & right parts of the array
    int * first = new int[l1];
    int * second = new int[l2];
    int k = s;
    for(int i=0; i<l1; i++){
        first[i] = arr[k++];
    }
    k = mid+1;
    for(int i=0; i<l2; i++){
        second[i] = arr[k++];
    }
    k = s;
    int i=0;
    int j=0;
    while(i<l1 && j<l2){
        if(first[i] < second[j]){
            arr[k++] = first[i++];
        }else{
            arr[k++] = second[j++];
        }
    }
    while(i<l1){
        arr[k++] = first[i++];
    }
    while(j<l2){
        arr[k++] = second[j++];
    }
    delete[]first;
    delete[]second;
}
void mergeSort(int * arr, int s, int e){
    // Base case 
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    // Left Part
    mergeSort(arr,s,mid);
    // Right Part
    mergeSort(arr,mid+1,e);
    // Merge both the sorted arrays into one
    merge(arr,s,e);
}
int main(){
    int arr[] = {2,9,8,6,4,1,3,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    for(int x : arr){
        cout << x << " ";
    }cout << endl;
    return 0;
}