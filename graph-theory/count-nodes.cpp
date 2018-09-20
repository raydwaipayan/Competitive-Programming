#include <bits/stdc++.h>
using namespace std;
typedef list<int> LI;
class Graph
{
    int V;
    LI* adj;

public:
    Graph(int V);

    void addEdge(int v, int w);
    
    //Return count of nodes at level l from given source
    int BFS(int s, int l);
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
int Graph::BFS(int s, int l)
{
    //Mark all the vertices are not visited
    bool* visited=new bool[V];
    int level[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
        level[i]=0;
    }

    //create a queue for BFS
    LI queue;
    level[s]=0;

    while(!queue.empty())
    {
        s=queue.front();
        queue.pop_front();

        //Get all the adjacent verties of the dequeued vertex s. 
        //if a adjacent vertex has not been visited then mark it
        //true and enqueue it
        
        for(auto i=adj[s].begin();i!=adj[s].end();++i)
        {
            if(!visited[*i])
            {
                //setting the level of each node wth an increment
                //in the level of parent node
                level[*i]=level[s]+1;
                visited[*i]=true;
                queue.push_back(*i);
            }
        }
    }
    int count=0;
    for(int i=0;i<V;i++)
    {
        if(level[i]==l)
            count++;
    }
    return count;
} 
int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);

    int level=0;
    cout<<g.BFS(0,level);
    return 0;
}