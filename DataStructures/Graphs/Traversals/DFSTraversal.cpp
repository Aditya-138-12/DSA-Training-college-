#include <iostream>
#include <vector>
using namespace std;
class GraphDFS {
    private:
    void dfs
    (int node, vector<int> adjList[], vector<int>& visited, 
    vector<int>& ans){
        visited[node] = 1; // Mark the starting node as visited
        ans.push_back(node);
        // Traverse all the neighbours
        for(auto it : adjList[node]){
            if(!visited[it]){
                dfs(it, adjList, visited, ans);
            }
        }
    }
    public:
    vector<int> dfsGraph(int V, vector<int> adjList[]){
        vector<int> visited(V+1, 0);
        // If it starts from 0, start = 0
        int start = 1;
        vector<int> ans;
        dfs(start, adjList, visited, ans);
        return ans;
    }
};
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printDFS(vector<int>& ans){
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
}
int main(){
    vector<int> adjList[11];
    addEdge(adjList, 1,2);
    addEdge(adjList, 1,7);
    addEdge(adjList, 2,3);
    addEdge(adjList, 2,6);
    addEdge(adjList, 3,4);
    addEdge(adjList, 3,5);
    addEdge(adjList, 7,8);
    addEdge(adjList, 8,9);
    addEdge(adjList, 7,10);
    GraphDFS obj;
    vector<int> ans = obj.dfsGraph(10, adjList);
    printDFS(ans);
    return 0;
}