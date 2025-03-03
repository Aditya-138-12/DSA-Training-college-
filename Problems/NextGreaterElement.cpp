#include <bits/stdc++.h>
using namespace std;
void printNGE(int arr[], int n){
    stack<int> s;
    s.push(arr[0]); // Push first ele onto stack
    for(int i=1; i<n; i++){
        // While stack is not empty and top element
        // is smaller than arr[i]
        while(!s.empty() && s.top() < arr[i]){
            cout << s.top() << " --> " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]); // Push the current element
    }
    // Remaining elements in stack have no greater elements
    while(!s.empty()){
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}
int main(){
    int arr1[] = {4,5,2,25};
    int arr2[] = {7,4,9,2,6,13};
    printNGE(arr1,4);
    printNGE(arr2,6);
    return 0;
}