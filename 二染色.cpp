#include<bits/stdc++.h>
using namespace std;
int a[201][201],n,m,x,y,visit[201],flag;
bool b[201];
int dfs(int k)
{
	for(int i=0;i<n;i++)
	if(a[k][i])
	{
		if(visit[i]&&b[i]==b[k])
		{
			flag=1;
			return 0;
		}
		if(visit[i]==0)
		{
			b[i]=!b[k];
			visit[i]=1;
			dfs(i);
		}
	}
}
int main(){
	while(1)
	{
		cin>>n;
		if(n==0)
		break; 
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		a[i][j]=visit[i]=b[i]=0;
		cin>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>x>>y;
			a[x][y]=a[y][x]=1;
		}
		flag=0;
		dfs(1);
		if(flag)
		cout<<"NOT BICOLORABLE."<<endl;
		else
		cout<<"BICOLORABLE."<<endl;
	}
	return 0;
}
