#include<bits/stdc++.h>
using namespace std;
int m,n,inx,iny,c,a[101][101],b[101][101],ans,minn=9999999,INF=9999999;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int dfs(int x,int y,int num,int flag)
{
	if(x<1||x>m||y<1||y>m)
	return 0;
	if(num>=b[x][y])
	return 0;
	b[x][y]=num;
	if(a[x][y]==0)
	return 0;
	if(x==m&&y==m)
	{
		minn=min(num,minn);
		return 0;
	}
	for(int i=0;i<4;i++)
	{
		if(a[x+dx[i]][y+dy[i]]!=0)
		{
			if(a[x+dx[i]][y+dy[i]]==a[x][y])
			dfs(x+dx[i],y+dy[i],num,0);
			else
			dfs(x+dx[i],y+dy[i],num+1,0);
		}
		else if(flag==0)
		{
			a[x+dx[i]][y+dy[i]]=a[x][y];
			dfs(x+dx[i],y+dy[i],num+2,1);
			a[x+dx[i]][y+dy[i]]=0;
		}
	}
	return minn;
}
int main(){
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
	for(int i=0;i<=100;i++)
	for(int j=0;j<=100;j++)
	b[i][j]=100000;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>inx>>iny>>c;
		a[inx][iny]=c+1;
	}
	ans=dfs(1,1,0,0);
	if(ans==INF)
	cout<<"-1";
	else
	cout<<ans;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
