#include<bits/stdc++.h>
using namespace std;
int n,v,a[101][101],visit[101],m[101],msize=2,k,in1,in2;
int bfs(int now)
{
	for(int i=1;i<=n;i++)
	if(a[now][i]==1&&visit[i]==0)
	{
		visit[i]=1;
		m[msize++]=i;
	}
	for(int i=1;i<=msize-1;i++)
	{
		if(visit[m[i]]==0)
		bfs(m[i]);
	}
}
int main(){
	cin>>n>>k>>v;
	for(int i=1;i<=k;i++)
	{
		cin>>in1>>in2;
		a[in1][in2]=1;
	}
	m[1]=v;
	visit[v]=1;
	bfs(v);
	for(int i=1;i<=n;i++)
	{
		if(visit[i]==0)
		{
			m[msize++]=i;
			visit[i]=1;
			bfs(i);
		}
	}
	for(int i=1;i<=msize-1;i++)
	cout<<m[i]<<' ';
	return 0;
}
