#include <iostream>
#include <vector>
using namespace std;
int fibMemo(int n, vector<int>& dp){
    // Base case
    if(n == 0 || n == 1){
        return n;
    }
    // Step 3: If you have the answer, don't calculate
    // Just return it
    if(dp[n] != -1){
        return dp[n];
    } 
    // Step 2: Store the values in the dp array
    dp[n] = fibMemo(n-1, dp) + fibMemo(n-2, dp);
    return dp[n];
}
int main(){
    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    // Step 1: Create a dp array and initialise 
    // all values to -1
    vector<int> dp(n+1, -1); // 0 based indexing 
    cout << fibMemo(n, dp) << endl;
    return 0;
}