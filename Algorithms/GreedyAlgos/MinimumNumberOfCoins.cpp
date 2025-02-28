#include <iostream>
#include <vector>
using namespace std;
void findMinimumCoins(vector<int>&coins, int V){
    // If the array is not sorted, sort it
    vector<int> result;
    for(int i=coins.size()-1; i>=0; i--){
        while (V >= coins[i])
        {
            V -= coins[i];
            result.push_back(coins[i]);
        }
    }
    cout << "Coins selected: ";
        for(int coin : result){
            cout << coin << " ";
        }cout << endl;
        cout << "Minimum number of coins: " <<
        result.size() << endl;
}
int main(){
    vector<int> coins = {1,2,5,10,20,50,100,500,1000,2000};
    int V = 11;
    findMinimumCoins(coins, V);
    return 0;
}
