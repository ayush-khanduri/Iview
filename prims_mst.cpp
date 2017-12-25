/*input
4 5
1 2 7
1 4 6
4 2 9
4 3 8
2 3 6
*/
//Prims algo for mst in undirected graph 
#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int> >v[10010];
int prim(int n)
{
	//min priority q
	priority_queue< pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > q;
	q.push(make_pair(0,n));
	bool vis[10010]={false};
	pair<int,int> p;
	int u,w,mst=0,i;
	while(!q.empty())
	{
		p=q.top();
		q.pop();
		u=p.second;
		w=p.first;
		//check cycle
		if(vis[u])
			continue;

		vis[u]=true;
		mst+=w;
		for(i=0;i<v[u].size();i++)
		{
			p.first=v[u][i].first;
			p.second=v[u][i].second;
			if(!vis[p.second])
				q.push(p);
		}
	}
	return mst;
}
int main()
{
	int n,m,i,x,y,w;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>w;
		v[x].push_back(make_pair(w,y));
		v[y].push_back(make_pair(w,x));
	}
	//taking 1 as start node
	int mst=prim(1);
	cout<<mst<<endl;
	return 0;
}