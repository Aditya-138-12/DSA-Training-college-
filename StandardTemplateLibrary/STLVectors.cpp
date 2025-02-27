#include <iostream>
#include <vector>
using namespace std;
int main(){
    // It behaves just like an array but 
    // with dynamic size
    // Used in Graphs -> Adjacency Matrix/List
    vector<int> numbers = {1,2,3,4,5};
    for(int i=0; i<numbers.size(); i++){
        cout << numbers[i] << " ";
    }cout << endl;
    for(int x : numbers){
        cout << x << " ";
    }cout << endl;

    // Ways to initialize a vector :
    vector<int> vector1(5); // 0 0 0 0 0 
    vector<int> vector2(5,3); // 3 3 3 3 3

    // Initialization from array
    int arr[] = {1,2,3};
    vector<int> vector3(arr, arr+3); // first, last pointers
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;

    // Important functions
    cout << "Size of the vector3: " << vector3.size() << endl;
    vector3.push_back(4);
    vector3.push_back(5);
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    vector3.pop_back();
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;

    vector3.resize(10); // 1 2 3 4 0 0 0 0 0 0
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    vector3.resize(15,100);
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    // vector3.clear(); // Delete all elements
    cout << vector3.empty() << endl; 
    vector3.erase(vector3.begin());
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    vector3.erase(vector3.begin(), vector3.begin()+2); // First 2
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    // Fornt & Back reference
    cout << "Front element: " << vector3.front() << endl;
    cout << "Back element: " << vector3.back() << endl;

    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};

    v1.swap(v2);
    for(int x : v1){
        cout << x << " ";
    } cout << endl;
    for(int x : v2){
        cout << x << " ";
    } cout << endl;
    // A vector already has some elements, you need to update
    vector3.assign(10,1);
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    vector3.insert(vector3.begin()+1, 2);
    for(int x : vector3){
        cout << x << " ";
    } cout << endl;
    return 0;
}