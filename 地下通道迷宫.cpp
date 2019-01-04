#include<bits/stdc++.h>
using namespace std;
int visit[1001],a[1001][1001],n,m,s,x,y;
int dfs(int now)
{
	visit[now]=1;
	cout<<now<<' ';
	for(int i=1;i<=n;i++)
	if(visit[i]==0&&a[now][i]==1)
	{
		dfs(i);
		cout<<now<<' ';
	}
}
int main(){
	while(cin>>n>>m>>s)
	{
		memset(visit,0,sizeof(visit));
		memset(a,0,sizeof(a));
		for(int i=1;i<=m;i++)
		{
			cin>>x>>y;
			a[x][y]=a[y][x]=1;
		}
		dfs(s);
		for(int i=1;i<=n;i++)
		if(visit[i]==0)
		{
			cout<<'0';
			break;
		}
		cout<<endl;
	}
	return 0;
}
