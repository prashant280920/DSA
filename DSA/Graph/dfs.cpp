/*
Description --
        Depth first search (DFS) algorithm starts with the initial node of the graph G,
        and then goes to deeper and deeper until we find the goal node or the node which 
        has no children. The algorithm, then backtracks from the dead end towards the 
        most recent node that is yet to be completely unexplored.

        The data structure which is being used in DFS is stack. 
        The process is similar to BFS algorithm. In DFS, the edges that
        leads to an unvisited node are called discovery edges while
        the edges that leads to an already visited node are called block edges.
*/

/*
Algorithm --
        Step 1: SET STATUS = 1 (ready state) for each node in G

        Step 2: Push the starting node A on the stack and set its STATUS = 2 (waiting state)

        Step 3: Repeat Steps 4 and 5 until STACK is empty

        Step 4: Pop the top node N. Process it and set its STATUS = 3 (processed state)

        Step 5: Push on the stack all the neighbours of N that are in the ready state
                (whose STATUS = 1) and set their STATUS = 2 (waiting state)
                [END OF LOOP]
*/

/*
PseudoCode --
        DFS(G,v)   ( v is the vertex where the search starts )
            Stack S := {};   ( start with an empty stack )
            for each vertex u, set visited[u] := false;
            push S, v;
            while (S is not empty) do
                u := pop S;
                if (not visited[u]) then
                visited[u] := true;
                for each unvisited neighbour w of u
                    push S, w;
                end if
            end while
        END DFS()
*/

#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> &vis,vector<int>adj[],vector<int>&storedfs){
    storedfs.push_back(node);
    vis[node] = 1;
    for(auto i:adj[node]){
        if(!vis[i]){
            dfs(i,vis,adj,storedfs);
        }
    }
}

vector<int>dfsGraph(int V,vector<int>adj[]){
    vector<int>storedfs;
    vector<int>vis(V+1,0);
    for(int i=1; i<=V; i++){
        if(!vis[i]){
            dfs(i,vis,adj,storedfs);
        }
    }
    return storedfs;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        
        vector<int>ans=dfsGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}