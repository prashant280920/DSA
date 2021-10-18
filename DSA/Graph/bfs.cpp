/*       
        Breadth first search is a graph traversal algorithm that
        starts traversing the graph from root node and explores all the neighbouring nodes.
        Then, it selects the nearest node and explore all the unexplored nodes.
        The algorithm follows the same process for each of the nearest node until it finds the goal.
*/

/*
        The algorithm of breadth first search is given below. 
        The algorithm starts with examining the node A and all of its neighbours.
        In the next step, the neighbours of the nearest node of A are explored and 
        process continues in the further steps.The algorithm explores all neighbours of 
        all the nodes and ensures that each node is visited exactly once and no node is 
        visited twice. Difference between structure and union in C
*/

/*
Algorithm
    Step 1: SET STATUS = 1 (ready state)
            for each node in Graph G

    Step 2: Enqueue the starting node A
            and set its STATUS = 2
            (waiting state)

    Step 3: Repeat Steps 4 and 5 until
            QUEUE is empty

    Step 4: Dequeue a node N. Process it
            and set its STATUS = 3
            (processed state).

    Step 5: Enqueue all the neighbours of
            N that are in the ready state
            (whose STATUS = 1) and set
            their STATUS = 2
            (waiting state)
            [END OF LOOP]

    Step 6: EXIT
*/
//Code ->

#include<bits/stdc++.h>
using namespace std;
vector<bool> v;
vector<vector<int>> g;
void bfsTraversal(int b){
    //Declare a queue to store all the nodes connected to b
    queue<int> q;
    //Insert b to queue
    q.push(b);
    //mark b as visited
    v[b] = true;
    cout << "\n\nThe BFS Traversal is:  ";
    while (!q.empty()){
        int a = q.front();
        q.pop(); //delete the first element form queue
        for (auto j = g[a].begin(); j != g[a].end(); j++)
        {
            if (!v[*j])
            {
                v[*j] = true;
                q.push(*j);
            }
        }
        cout << a << "  ";
    }
}

void makeEdge(int a, int b){
    g[a].push_back(b); //an edge from a to b (directed graph)
}

int main(){
    int n, e;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "\n\nEnter the number of edges: ";
    cin >> e;
    v.assign(n, false);
    g.assign(n, vector<int>());
    int a, b, i;
    cout << "Enter the edges with source and target vetex: \n ";

    for (i = 0; i < e; i++){
        cin >> a >> b;
        makeEdge(a, b);
    }

    for (i = 0; i < n; i++){
        //if the node i is unvisited
        if (!v[i]){
            bfsTraversal(i);
        }
    }
    cout << "\n\n\n";
    return 0;
}
