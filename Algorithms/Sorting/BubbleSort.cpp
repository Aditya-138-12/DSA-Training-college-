#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    // n-1 Iterations 1 to < n
    for(int i=1; i<n; i++){ // Iterations or Passes Or Rounds
        for(int j=0; j<n-1; j++){ // For comparison take 0 to second last
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    } 
}
int main(){
    int arr[] = {5,1,3,9,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int x : arr){
        cout << x << " ";
    }cout << endl;
    return 0;
}