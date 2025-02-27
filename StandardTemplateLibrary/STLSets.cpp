#include <iostream>
#include <set> // Asc/Alpha Order
#include <unordered_set> // Hashing
using namespace std;
int main(){
    // Duplicate elements will be automatically
    // deleted
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    cout << "Elements of the Sorted(Set): ";
    for(auto x : s){
        cout << x << " ";
    }cout << endl;

    unordered_set<int> hashSet;
    hashSet.insert(1);
    hashSet.insert(2);
    hashSet.insert(1);
    hashSet.insert(3);
    hashSet.insert(1);
    hashSet.insert(15);

    cout << "Elements of the Hashed(Set): ";
    for(auto x : hashSet){
        cout << x << " ";
    }cout << endl;
    return 0;
}