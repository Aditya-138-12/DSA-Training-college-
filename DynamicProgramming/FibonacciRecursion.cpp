#include <iostream>
using namespace std;
int fibonacciRecursion(int n){
    // Base case
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacciRecursion(n-1) + fibonacciRecursion(n-2);
}
int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n; 
    cout << n << "th Fib Element: " << fibonacciRecursion(n);
    return 0;
}