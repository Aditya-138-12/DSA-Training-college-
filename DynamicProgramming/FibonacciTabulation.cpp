#include <iostream>
#include <vector>
using namespace std;
int fibonacciTab(int n){
    // Base case
    if(n == 0 || n == 1){
        return n;
    }
    // Step: 1 Create the dp array
    vector<int> dp(n+1, -1);
    // Step 2: Store the known values
    dp[0] = 0;
    dp[1] = 1;
    // Step: 3 Calculate the rest of the values 2 to n
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }  
    return dp[n];
    
}
int main(){
    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    cout << fibonacciTab(n) << endl;
    return 0;
}