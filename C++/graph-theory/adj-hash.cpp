#include <bits/stdc++.h>
using namespace std;
typedef unordered_set<int> USI;

struct Graph
{
    int V;
    USI* adj;
};
//A utility function that creates a graph of V vertices
Graph* createGraph(int V)
{
    Graph* graph=new Graph;
    graph->V=V;
    graph->adj=new USI[V];
    return graph;
}
void addEdge(Graph* graph, int src,int dest)
{
    graph->adj[src].insert(dest);
    graph->adj[dest].insert(src);
}
void printGraph(Graph* graph)
{
    for(int i=0;i<graph->V;i++)
    {
        USI lst=graph->adj[i];
        for(auto itr=lst.begin();itr!=lst.end();itr++)
            cout<<*itr<<" ";
        cout<<"\n";
    }
}
void searchEdge(Graph* graph, int src, int dest)
{
    auto itr=graph->adj[src].find(dest);
    if(itr==graph->adj[src].end())
        cout<<"Edge from "<<src<<" to "<<dest<<" not found\n";
    else
        cout<<"Edge from "<<src<<" to "<<dest<<" found!\n";
}
int main()
{
    // Create the graph given in the above figure
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    // Print the adjacency list representation of
    // the above graph
    printGraph(graph);
 
    // Search the given edge in the graph
    searchEdge(graph, 2, 1);
    searchEdge(graph, 0, 3);
 
    return 0;
}