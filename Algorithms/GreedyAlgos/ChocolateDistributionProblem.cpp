#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long findMinDiff(vector<long long> a, long long n, 
    long long m){
        sort(a.begin(), a.end());
        int i = 0;
        int j = m-1;
        int mini = INT_MAX;
        while(j < a.size()){
            int diff = a[j] - a[i];
            mini = min(mini, diff);
            i++;
            j++;
        }
        return mini;
    } 
};
int main(){
    // INT_MAX = 2^31 - 1  INT_MIN = -2^31
    cout << INT_MAX + 1 << endl;
    cout << INT_MIN - 1 << endl;
    vector<long long> a = {7, 3, 2, 4, 9, 12, 56};
    Solution obj;
    cout << obj.findMinDiff(a,a.size(), 3) << endl;
    return 0;
}