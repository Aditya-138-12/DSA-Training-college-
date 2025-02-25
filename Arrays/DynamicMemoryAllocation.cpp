#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2}; // 1,2,0,0,0 
    // 4x3 = 12 bytes wasted...!!!
    // DMA -> Allocating memory during runtime (Pointers)
    // new -> Allocation delete -> De-allocation -> C++
    // Java -> new -> Object Creation -> COnstructor
    // 1D array
    int n;
    cin >> n;
    int * myArray = new int[n];
    for(int i=0; i<n; i++){
        cin >> myArray[i];
    }
    for(int i=0; i<n; i++){
        cout << myArray[i] << " "; 
    }cout << endl;

    // 2D array
    int ** twoD = new int * [n]; // This actually creates the rows
    for(int i=0; i<n; i++){
        twoD[i] = new int[n]; // This creates each row with n cols
        for(int j=0; j<n; j++){
            cin >> twoD[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << twoD[i][j] << " "; 
        }cout << endl;
    }

    // De-allocate memory
    delete[]myArray;
    delete[]twoD;
    
    return 0;
}