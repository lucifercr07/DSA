#include<iostream>
#include<list>

using namespace std;

class Graph()
{
	int v;
	list<int> adj;
public:
	Graph(int v);
	void addEdge(int v, int n);
	void BFS(int s);
	void DFS(int s);
};

Graph::Graph(int v)
{
	this->v=v;
	adj=new list<int>[v];
}

void Graph::addEdge(int v,int n)
{
	adj[v].push_back(n);
}

void Graph::BFS(int s)
{
	bool *visited = new bool[v];
	for(int i=0;i<v;i++)
		visited[i]=false;

	list<int> l;
	visited[s]=true;
	list<int>::iterator i;
	l.push_back(s);
	while(!l.empty())
	{
		s=l.front();
		cout<<s<<" ";
		q.pop_front();
		for(it=adj[s].begin();it!=adj[s].end();++it)
		{
			if(!visited[*it])
			{
				l.push_back(*it);
				visited[*it]=true;
			}
		}
	}
}
/*For Weakly connected graph
void DFS(int s)
{
	bool *visited = new bool[v];
	for(int i=0;i<v;i++)
		visited[i]=false;

	stack<int> s1;
	s1.push(s);
	visited[s]=true;
	while(!s.empty())
	{
		s=s1.top();
		cout<<s<<" ";
		s1.pop();
		list<int>::iterator it;
		for(it=adj[s].begin();it!=adj.end();++it)
		{
			visited[*it]=true;
			s.push(*it);
		}
	}
}*/

void DFS(int s)
{
	bool *visited = new bool[v];
	for(int i=0;i<n;i++)
		visited[i]=false;

	for(int i=0;i<v;i++)
		if(!visited[i])
		dfsUtil(i,&visited);	
}

void dfsUtil(int s,int *visited)
{
	visited[s]=true;
	cout<<s<<" ";
	list<int>::iterator it;
	for(it=adj[s].begin();it!=adj[s].end();++it)
	{
		visited[*it]=true;
		dfsUtil(*it,&visited);
	}
}