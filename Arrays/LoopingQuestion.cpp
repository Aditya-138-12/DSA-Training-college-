#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    cout << ++a + ++b << endl;
    cout << a << " " << b << endl;

    for(int i=0; i<4; i++){
        cout << i << " ";
    }cout << endl;

    for(int i=0; i<4; ++i){
        cout << i << " ";
    }cout << endl;
    return 0;
}