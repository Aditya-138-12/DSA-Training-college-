#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class GraphBFS {
    public:
    vector<int> bfsGraph(int V, vector<int> adjList[]){
        vector<int> visited(V+1, 0);
        visited[5] = 1;
        queue<int> q;
        q.push(5);
        vector<int> bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            // Traverse all of it's neighbours
            for(auto it : adjList[node]){
                if(!visited[it]){
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printBFS(vector<int>& ans){
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
}
int main(){
    vector<int> adjList[6]; // Zero based indexing
    addEdge(adjList, 1,2);
    addEdge(adjList, 1,5);
    addEdge(adjList, 2,5);
    addEdge(adjList, 2,3);
    addEdge(adjList, 3,5);
    addEdge(adjList, 3,4);
    addEdge(adjList, 4,5);
    GraphBFS obj;
    vector<int> ans = obj.bfsGraph(5, adjList);
    printBFS(ans);
    return 0;
}