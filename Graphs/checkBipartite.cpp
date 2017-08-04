//Using BFS
#include <bits/stdc++.h>

using namespace std;

class Graph
{
	int v;
	list<int> *adj;
	public:
	Graph(int v);
	void addEdge(int v,int w);	
	bool isBipartite(int src);	
	void DFS(int s);
};

Graph::Graph(int v)
{
	this->v=v;
	adj = new list<int>[v];
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph::DFS(int s)
{
	bool *visited = new bool[v];
	for(int i=0;i<v;i++)
		visited[i]=false;

	stack<int> s1;
	s1.push(s);
	visited[s]=true;
	while(!s1.empty())
	{
		int u = s1.top();
		cout<<u<<" ";
		s1.pop();
		list<int>::iterator it;
		for(it=adj[u].begin();it!=adj[u].end();++it)
		{
			if(!visited[*it])
			{
				visited[*it]=true;
				s1.push(*it);
			}
		}

	}

}

bool Graph::isBipartite(int src)
{
	int *color=new int[v];
	for(int i=0;i<v;i++)
		color[i]=-1;

	queue<int> q;
	q.push(src);
	color[src]=1;

	while(!q.empty())
	{
		int u = q.front();
		q.pop();

		list<int>::iterator it;
		for(it=adj[u].begin();it!=adj[u].end();++it)
		{
			if(color[*it]==-1)
			{
				color[*it]=1-color[u];
				q.push(*it);
			}
			else if(color[*it]==color[u])
				return false;
		}
	}
	return true;
}

int main()
{
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,0);
	g.DFS(0);
	g.isBipartite(0)?cout<<"Yes":cout<<"No"<<endl;
}