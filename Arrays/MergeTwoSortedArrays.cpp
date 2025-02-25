#include <iostream>
using namespace std;
void mergeTwoSortedArrays
(int a1[], int a2[], int n1, int n2, int a3[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n1 && j < n2){
        if(a1[i] < a2[j]){
            a3[k++] = a1[i++];
        }else{
            a3[k++] = a2[j++];
        }
    }
    // If any remaining elements are there, just copy them 
    while(i < n1){
        a3[k++] = a1[i++];
    }
    while(j < n2){
        a3[k++] = a2[j++];
    }
}
int main(){
    int a1[5] = {1,3,5,7,9};
    int a2[3] = {2,4,6};
    int a3[8] = {0};
    mergeTwoSortedArrays(a1,a2,5,3,a3);
    for(int x : a3){
        cout << x << " ";
    }cout << endl;
    return 0;
}