#include <bits/stdc++.h>

using namespace std;

class Graph
{
	int v;
	list<int> *adj;
	public:
	Graph(int v);
	void addEdge(int v, int n);
	void BFS(int s);
	void printGraph();
};


Graph::Graph(int v)
{
	this->v=v;
	adj = new list<int>[v];
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
	l.push_back(s);
	visited[s]=true;

	while(!l.empty())
	{
		s=l.front();
		cout<<s<<" ";
		l.pop_front();

		for(auto it=adj[s].begin();it!=adj[s].end();++it)
		{
			visited[*it]=true;
			l.push_back(*it);
		}
	}

}

void Graph::printGraph()
{
	
}

int main()
{
	printf("Enter number of vertexes: ");
	int n;
	cin>>n;
	Graph g(n);
	int l,m;
	
	char a;
	
	while(a!='X')
	{
		cout<<"Enter X to exit and 1 to enter: ";
		cin>>a;
		if(a=='X')
			break;
		cout<<"Enter two vetexes which are connected";
		cin>>l>>m;
		g.addEdge(l,m);
	}
	g.printGraph();
	//g.BFS(2);
}
