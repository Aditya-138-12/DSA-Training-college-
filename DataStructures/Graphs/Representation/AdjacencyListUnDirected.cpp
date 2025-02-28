#include <iostream>
#include <vector>
using namespace std;
int main(){
    // n -> nodes -> vertices
    // m -> edges
    int n, m;
    cin >> n >> m;
    vector<int> adjacencyList[n+1]; // Zero based Indexing
    // Connect the 'n' nodes with given 'm' edges 
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        // Undirected Graph u <--> v
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        cout << "Node: " << i << ": List of Neighbours: ";
        for(int v : adjacencyList[i]){
            cout << v << " ";
        }cout << endl;
    }
    return 0;
}