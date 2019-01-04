#include<bits/stdc++.h>
using namespace std;
int e[101][101],n,a[101],x,y,minn=9999999,ans;
int main(){
	for(int i=1;i<=101;i++)
	for(int j=1;j<=101;j++)
	e[i][j]=999999;
	cin>>n;
	for(int i=1;i<=n;i++)
	e[i][i]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>x>>y;
		e[i][x]=e[x][i]=1;
		e[i][y]=e[y][i]=1;
	}
	for(int k=1;k<=n;k++)
	for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(e[i][j]>e[i][k]+e[k][j] ) 
    e[i][j]=e[i][k]+e[k][j];
    for(int i=1;i<=n;i++)
    {
    	ans=0;
    	for(int j=1;j<=n;j++)
   		ans+=e[i][j]*a[j];
   		minn=min(minn,ans);
	}
    cout<<minn;
    return 0;
}
