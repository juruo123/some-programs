#include<bits/stdc++.h>
using namespace std;
int n,v,e,head=1,tail=2,g[101][101],ans[101],visit[101];
void bfs(int k)
{
	visit[k]=1;
	while(head<tail)
	{
		for(int j=1;j<=n;j++)
		{
			if(g[ans[head]][j]!=0&&!visit[j])
			{
				ans[tail]=j;
				visit[j]=1;
				tail++;
			}
		}
		head++;
	}
}
int main()
{
	int x,y;
	cin>>n>>e>>v;
	for(int i=1;i<=e;i++)
	{
		cin>>x>>y;
		g[x][y]=g[y][x]=1;
	}
	ans[head]=v;
	bfs(v);
	for(int i=1;i<=n;i++)
	if(!visit[i])
	{
		ans[tail++]=i;
		bfs(i);
	}
	for(int i=1;i<tail;i++)
	cout<<ans[i]<<' ';
	return 0;
 } 
