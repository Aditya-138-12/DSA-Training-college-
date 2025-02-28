#include <iostream>
using namespace std;
int binary_search_square_root(int n){
    int s = 0;
    int e = n; // Important Adjustment
    int mid = (s+e)/2;
    int ans = -1;
    while(s <= e){
        int square = mid * mid;
        if(square == n){
            return mid;
        }else if(square > n){
            e = mid - 1;
        }else{
            // Store the answer & go to the right
            ans = mid;
            s = mid + 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main(){
    cout << binary_search_square_root(36) << endl;
    cout << binary_search_square_root(64) << endl;
    cout << binary_search_square_root(144) << endl;
    return 0;
}