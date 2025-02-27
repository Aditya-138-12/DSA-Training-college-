#include <bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int> flist = {10,20,30};
    // Adding elements to the front
    flist.push_front(1);
    flist.push_front(2);
    // Traversals
    // Traversal 1: FOr Each Loop
    for(int x : flist){
        cout << x << " ";
    }cout << endl;
    // Traversal 2: Using iterator ****** auto // pointer
    for(auto it = flist.begin(); it != flist.end(); ++it){
        cout << *it << " ";
    }cout << endl;
    // 3: Using real iterator
    for(forward_list<int>::iterator it = flist.begin(); it != flist.end(); ++it){
        cout << *it << " ";
    }cout << endl;

    // 4: Using auto
    for(auto x : flist){
        cout << x << " ";
    }cout << endl;
    return 0;
}