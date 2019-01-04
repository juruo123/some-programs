#include<bits/stdc++.h>
using namespace std;
int n,m,f[61][32001],v[61][3],p[61][3],z[61],a,b,c;
int main(){
	cin>>n>>m;
	for(int i=1;i<=61;i++)
	z[i]=1;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>c;
		if(c==0)
		{
			v[i][0]=a;
			p[i][0]=a*b;
		}
		else
		{
			v[c][z[c]]=a;
			p[c][z[c]]=a*b;
			z[c]++;
		}
	}
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		if(j-v[i][0]>=0)
		{
			f[i][j]=max(f[i-1][j],f[i-1][j-v[i][0]]+p[i][0]);
			if(j-v[i][0]-v[i][1]>=0)
			f[i][j]=max(f[i][j],f[i-1][j-v[i][0]-v[i][1]]+p[i][0]+p[i][1]);
			if(j-v[i][0]-v[i][2]>=0)
			f[i][j]=max(f[i][j],f[i-1][j-v[i][0]-v[i][2]]+p[i][0]+p[i][2]);
			if(j-v[i][0]-v[i][1]-v[i][2]>=0)
			f[i][j]=max(f[i][j],f[i-1][j-v[i][0]-v[i][1]-v[i][2]]+p[i][0]+p[i][1]+p[i][2]);
		}
		else
		f[i][j]=f[i-1][j];
	}
	cout<<f[m][n];
	return 0;
}
