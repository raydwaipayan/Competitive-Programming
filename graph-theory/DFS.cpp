#include <bits/stdc++.h>
using namespace std;

typedef list<int> LI;
class Graph
{
    int V;
    LI *adj;
 public:  
    Graph(int);

    //A recursive function used by DFS
    void DFSUtil (int, bool*);
    void addEdge(int, int);
    void DFS(int);
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new LI[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::DFSUtil(int v, bool* visited)
{
    //Mark the current node as visited and print it
    visited[v]=true;
    cout<<v<<" ";

    //Recur for all the vertices adjacent to this vertex
    LI::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[*i])
            DFSUtil(*i, visited);
    }
}
void Graph::DFS(int v)
{
    //mark all the vertices as not visited
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    //Call the recursive Definition DFSUtil
    DFSUtil(v, visited);
}

//driver program;
int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,2);
    g.addEdge(2,3);
    g.addEdge(3,3);

    g.DFS(2);

    return 0;
}