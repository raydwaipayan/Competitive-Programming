//a simple representation of graph using stl
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
//a utility function to add an edge to an undirected graph
void addEdge(VI adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//an utility function to print the adjacency list representation of a graph

void printGraph(VI adj[], int V)
{
    for(int v=0;v<V;++v)
    {
        cout<<"\n Adjacency list of vertex "<<v<<"\nhead";
        for(auto x : adj[v]){
            cout<<"-->"<<x;
        }
        cout<<"\n";
    }
}
//Driver code
int main()
{
    int V=5;
    VI adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    printGraph(adj,V);
    return 0;
}
    