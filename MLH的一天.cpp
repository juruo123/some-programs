#include<bits/stdc++.h>
using namespace std;
int n,m,num_edge,dis[50001],k=0,minn=0x7fffffff,head[1001];
bool b[1001];
struct Edge
{
	int next;
	int to;
	int dis;
}edge[1001];
void add_edge()
{
	int from,to,dis;
	cin>>from>>to>>dis;
	edge[++num_edge].next=head[from];
	edge[num_edge].to=to;
	edge[++num_edge].dis=dis;
	head[from]=num_edge;
}
void dijkstra()
{
	for(int i=1;i<n;i++)
	{
		memset(b,false,sizeof(b));
		b[1]=true;
		for(int j=1;j<=n;j++)
		if(!b[j]&&dis[j]<minn)
		{
			minn=dis[j];
			k=j;
		}
		if(k==0)
		break;
		b[k]=1;
		for(int i=head[k];i!=0;i=edge[i].next)
		if(dis[k]+edge[i].dis<dis[edge[i].to])
		dis[edge[i].to]=dis[k]+edge[i].dis;
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	add_edge();
	memset(b,false,sizeof(b));
	memset(dis,0x7f,sizeof(dis));
	dijkstra();
	dis[1]=0;
	cout<<dis[n];
	return 0;
}
