#include<bits/stdc++.h>
using namespace std;
int g[1025][1025],du[1025],circuit[1025],n,circuitpos,x,y,start;
void find(int i)
{
	for(int j=1;j<=1024;j++)
	if(g[i][j])
	{
		g[j][i]--;
		g[i][j]--;
		find(j);
	}
	circuit[++circuitpos]=i;
}
int main(){
	memset(g,0,sizeof(g));
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		g[y][x]++;
		g[x][y]++;
		du[x]++;
		du[y]++;
	}
	start=1;
	for(int i=1;i<=1024;i++)
	if(du[i]%2)
	{
		start=i;
		break;
	}
	find(start);
	for(int i=circuitpos;i>=1;i--)
	cout<<circuit[i]<<endl;
	return 0;
}
