#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,a[1001][1001],visit[1001],head,tail,ans[1001];
int bfs(int k)
{
	visit[k]=1;
	while(head<tail)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[ans[head]][j]!=0&&!visit[j])
			{
				visit[j]=1;
				ans[tail++]=j;
			}
		}
		head++;
	}
}
int main(){
	while(1)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		a[i][j]=visit[i]=ans[i]=0;
		if(n==0)
		return 0;
		head=1;
		tail=2;
		ans[head]=1;
		for(int i=1;i<=m;i++)
		{
			cin>>x>>y;
			a[x][y]=a[y][x]=1;
		}
		bfs(1);
		int flag=0;
		if(tail!=n+1)
		cout<<'0';
		else
		{
			int a2=0,sum;
			for(int i=1;i<=n;i++)
			{
				sum=0;
				for(int j=1;j<=n;j++)
				{
					if(a[i][j]==1)
					sum++;
				}
				if(sum%2==1)
				a2++;
			}
			if(a2==0||a2==2)
			cout<<'1';
			else
			cout<<'0';
		}
	}
}
