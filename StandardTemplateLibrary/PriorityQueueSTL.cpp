#include <iostream>
#include <queue>
using namespace std;
int main(){
    // Deletion/Removal/Search of max or min value -> Big O(1)
    // Both max heaps & min heaps are Complete Binary Trees
    // Max Heap -> Greedy Algos -> Fractional Knapsack
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(3);
    maxHeap.push(11);
    cout << "Max Heap: ";
    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }cout << endl;
    // Min Heap -> Comparator Function -> greater<int>
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(20);
    minHeap.push(30);
    minHeap.push(2);
    minHeap.push(0);
    cout << "Min Heap: ";
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }cout << endl;
    return 0;
}