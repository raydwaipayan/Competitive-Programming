#include <bits/stdc++.h>
using namespace std;

//this class represents a directed graph using adj list
class Graph{
    int V;

    list<int> *adj;
public:
    Graph(int);
    //function to add an edge to graph
     void addEdge(int,int);

     //prints BFS traversal from a given source 
     void BFS(int);
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}
void Graph::BFS(int s)
{
    //mark all vertices as not visited
    bool *visited=new bool[V];
    for(int i=-0;i<V;i++)
        visited[i]=false;
    
    //create a queue for BFS
    list<int> queue;

    //Mark the current node as visited and enqueue it
    visited[s]=true;
    queue.push_back(s);
    
    //i will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
    while(!queue.empty())
    {
        //Dequeue a vertex from queue and print it
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();

        //Get all adjacent vertices dequeued vertex s. If a adjacent 
        //vertex has not been visited, then mark it visied and enqueue it
        for(i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                queue.push_back(*i);
            }
        }
    }
}
//Driver code
int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    cout<<"Following is BFS traversal starting from vertex 2\n";
    g.BFS(2);
    return 0;
}