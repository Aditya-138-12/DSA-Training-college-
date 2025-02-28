#include <iostream>
using namespace std;
int main(){
    // n -> nodes/vertices
    // m -> edges/connections
    int n, m;
    cin >> n >> m;
    // We are considering undirected graph
    // It is mandatory to traverse al the nodes.
    // Time Complexity = O(n) -> n -> Number of Nodes
    int ** adjacencyMatrix = new int * [n+1]; // Zero Based Index
    for(int i=0; i<=n; i++){
        // Each row: i = 0,1,2,3,4,5
        adjacencyMatrix[i] = new int[n+1]; // Assigning columns
        for(int j=0; j<=n; j++){
            adjacencyMatrix[i][j] = 0;
        }
    }
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adjacencyMatrix[u][v] = 1;
        // Undirected Graph
        adjacencyMatrix[v][u] = 1;
        // For directed graph
        // adjacencyMatrix[v][u] = 0; 
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << adjacencyMatrix[i][j] << " ";
        }cout << endl;
    }
    return 0;
}