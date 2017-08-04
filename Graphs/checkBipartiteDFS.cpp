//Using DFS
#include <bits/stdc++.h>

using namespace std;

class Graph
{
	int v;
	list<int> *adj;
	bool isBipartiteUtil(int src,int *color,bool *visited);
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
	//adj[w].push_back(v);
}

bool Graph::isBipartiteUtil(int v,int color[],bool visited[])
{
	bool flag;
	visited[v]=true;
	color[v]=1;
	list<int>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();++it)
	{
		if(color[*it]==-1)
		{
			color[*it]=1-color[v];
			visited[*it]=true;
			flag=isBipartiteUtil(*it,color,visited);
		}
		else if(color[*it]==color[v])
		{
			flag=false;
			return flag;
		}
	}
	return flag;
}

bool Graph::isBipartite(int src)
{
	bool *visited = new bool[v];
	int *color = new int[v];
	for(int i=0;i<v;i++)
	{
		color[i]=-1;
		visited[i]=0;
	}
	int flag=1;
	for(int i=0;i<v;i++)
	{	
		if(color[i]==-1&& !visited[i])
		{
			flag=isBipartiteUtil(v,color,visited);
			if(flag==0)
				return false;
		}
	}
	for(int i=0;i<v;i++)
		cout<<color[i]<<" ";
	cout<<endl;
	return true;

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
int main()
{
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,0);
	g.DFS(0);
	g.isBipartite(0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
}