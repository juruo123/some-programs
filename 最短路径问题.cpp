#include<bits/stdc++.h>
using namespace std;
double n,m,a[101][101],x[101],y[101];
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
	for(int k=1;k<=n;k++)
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(a[i][k]+a[k][j]<a[i][j])
	a[i][j]=a[i][k]+a[k][j];
	printf("%.2lf",a[s][t]);
	return 0;
}
