#include <bits/stdc++.h>
using namespace std;

typedef set<int, greater<int>> SI;

struct Graph
{
    int V;
    SI* adj;
};

//An utility function that creates a graph of V nodes
Graph* createGraph(int  V)
{
    Graph* graph=new Graph;
    graph->V=V;
    //create an adjacency list using set
    graph->adj=new SI[V];

    return graph;
}
//Add an edge to an undirected graph
void addEdge(Graph* graph, int src, int dest)
{
    graph->adj[src].insert(dest);
    graph->adj[dest].insert(src);
}

void printGraph(Graph* graph)
{
    for(int i=0;i<graph->V;i++)
    {
        SI lst=graph->adj[i];
        cout<< "\nAdjacency list of vertex "<<i<<": \n";
        for(auto itr=lst.begin();itr!=lst.end();itr++)
        {
            cout<<*itr<<" ";
        }
        cout<<endl;
    }
}
//Searches for a given edge in the graph 
void searchEdge(Graph* graph, int src, int dest)
{
    auto itr=graph->adj[src].find(dest);
    if(itr==graph->adj[src].end())
        cout<<"Edge from "<<src<<" to "<<dest<<" not found\n";
    
    else
        cout<<"Edge from "<<src<<" to "<<dest<<" found!\n";
    
}
//Driver code
int main()
{
     int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);

    searchEdge(graph,2,1);
    searchEdge(graph,0,3);

    return 0;   
}