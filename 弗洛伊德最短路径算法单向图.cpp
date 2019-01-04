#include<bits/stdc++.h>
using namespace std;
int n,a[51][51];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	for(int i=1;i<=50;i++)
	for(int j=1;j<=50;j++)
	{
		if(a[i][j]==0)
		a[i][j]=1e9;
		if(i==j)
		a[i][j]=0;
	}
	for(int k=1;k<=n;k++)
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(k!=i&&i!=j&&j!=k&&a[i][j]>a[i][k]+a[k][j]&&a[i][k]!=1e9&&a[k][j]!=1e9)
	a[i][j]=a[i][k]+a[k][j];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		if(a[i][j]==1e9)
		cout<<"-1 ";
		else
		cout<<a[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}
