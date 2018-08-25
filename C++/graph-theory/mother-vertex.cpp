#include <bits/stdc++.h>
using namespace std;

typedef vector<bool> VB;
typedef list<int> LI;

class Graph
{
    int V;
    LI* adj;

    //a recursive function to print DFS starting from v
    void DFSUtil(int v, VB &visited);
public:
    Graph(int V);
    void addEdge(int v,int w);
    int findMother();
};
void Graph::DFSUtil(int v, VB &visited)
{
    //mark the current node as visited 
    visited[v]=true;

    //Recur for all the vertices adjacent to this vertex
    LI::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
        if(!visited[*i])
            DFSUtil(*i,visited);
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}
//Returns a mother vertex if exists else returns -1
int Graph::findMother()
{
    VB visited(V,false);

    //to store the last finished vertex
    int v=0;

    //Do a DFS traversal and find the last finishe vertex
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            DFSUtil(i, visited);
            v=i;
        }
    }

    //to make sure that it is the mother vertex
    fill(visited.begin(), visited.end(), false);
    DFSUtil(v, visited);
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
            return -1;
    }
    return v;
}
int main
{
    Graph g(7);
    g.addEdge(0.1);
    g.addEde(0,2);
    g.addEdge(1,3);
    g.addEdge(4,1);
    g.addEdge(6,4);
    g.addEdge(5,6);
    g.addEdge(5,2);
    g.addEdge(6,0);

    cout<<"Mother vertex is "<<g.findMother();

    return 0;
}

