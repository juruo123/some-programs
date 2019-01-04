#include<bits/stdc++.h>
using namespace std;
#define flase false
#define ture true
#define maxx 999999999
double n,m,a[101][101],x[101],y[101],dis[101],c[101];
bool b[101];
int in1,in2,s,t;
int main(){
	cin>>n;
	for(int i=0;i<=n;i++)
	for(int j=0;j<=n;j++)
	a[i][j]=999999999;
	for(int i=1;i<=n;i++)
	{
		cin>>in1>>in2;
		x[i]=in1;
		y[i]=in2;
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>in1>>in2;
		a[in1][in2]=a[in2][in1]=sqrt(pow(x[in1]-x[in2],2)+pow(y[in1]-y[in2],2));
	}
	cin>>s>>t;
	for(int i=1;i<=n;i++)
	dis[i]=a[s][i];
	memset(b,false,sizeof(b));
	b[s]=ture;
	c[s]=0;
	for(int i=1;i<=n-1;i++)
	{
		int minn=maxx;
		int k=0;
		for(int j=1;j<=n-1;i++)
		if(!b[j]&&c[j]<minn)
		{
			minn=c[j];
			k=j;
		}
		if(k==0) break;
		b[k]=true;
		for(int j=1;j<=n;j++)
		if(c[k]+a[k][j]<c[j])
		c[j]=c[k]+a[k][j];
	}
	printf("%.2lf",c[t]);
	return 0;
}
