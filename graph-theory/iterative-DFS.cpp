#include <bits/stdc++.h>
using namespace std;

typedef list<int> LI;
typedef vector<bool> VB;
typedef stack<int> SI;
class Graph
{
    int V;
    LI* adj;
public:
    Graph(int);
    void addEdge(int,int);
    void DFS(int);
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new LI[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}
void Graph::DFS(int s)
{
    VB visited(V,false);

    SI stack;
    stack.push(s);

    while(!stack.empty())
    {
        s=stack.top();
        stack.pop();

        cout<<s<<" ";
        visited[s]=true;

        for(auto x=adj[s].begin();x!=adj[s].end();x++)
            if(!visited[*x])
                stack.push(*x);
    }
}
int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    cout<<"Following is DFS traversal starting from vertex 0\n";
    g.DFS(0);
    return 0;
}