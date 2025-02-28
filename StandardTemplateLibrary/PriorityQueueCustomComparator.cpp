#include <iostream>
#include <queue>
using namespace std;
struct CustomCompare {
    bool operator() (const int& lhs, const int& rhs){
        // Ascending order -> Min Heap
        // return lhs > rhs;
        // Descending order -> Max Heap
        return lhs < rhs;
    }
};
int main(){
    priority_queue<int, vector<int>, CustomCompare> customHeap;
    customHeap.push(10);
    customHeap.push(30);
    customHeap.push(40);
    customHeap.push(0);
    cout << "Custom Heap: ";
    while(!customHeap.empty()){
        cout << customHeap.top() << " ";
        customHeap.pop();
    } cout << endl;
    return 0;
}