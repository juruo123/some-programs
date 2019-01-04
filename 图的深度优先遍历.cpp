#include<bits/stdc++.h>
using namespace std;
int n,v,a[101][101],visit[101];
int dfs(int now)
{
	cout<<now<<' ';
	for(int i=1;i<=n;i++)
	if(a[now][i]==1&&visit[i]==0)
	{
		visit[i]=1;
		dfs(i);
	}
}
int main(){
	cin>>n>>v;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	visit[v]=1;
	dfs(v);
	for(int i=1;i<=n;i++)
	{
		if(visit[i]==0)
		{
			visit[i]=1;
			dfs(i);
		}
	}
	return 0;
}
