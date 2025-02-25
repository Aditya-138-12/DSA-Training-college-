#include <iostream>
using namespace std;
int maxRegions(int n){
    return (n*(n+1)/2)+1;
}
int maxPieces(int n){
    return (n*(n+1)/2)+1;
}
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    cout << "Max Regions: " << maxRegions(n1) << endl;
    cout << "Max Pieces: " << maxPieces(n2) << endl;
    return 0;
}