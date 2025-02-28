#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findCommonElements(vector<int>&a, vector<int>&b, vector<int>&c){
    vector<int> common;
    for( int i : a){
        if(find(b.begin(), b.end(), i) != b.end() && 
          (find(c.begin(), c.end(), i) != c.end())){
            common.push_back(i);
        }
    }
    return common;
}
int main(){
    vector<int> a = {1,2,3,4};
    vector<int> b = {3,4,5,6};
    vector<int> c = {4,3,6,7};
    vector<int> result = findCommonElements(a,b,c);
    for(auto ele : result){
        cout << ele << " ";
    }cout << endl;
    return 0;
}