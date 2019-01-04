#include<bits/stdc++.h>
using namespace std;
int n,m,x,a[1001],b[1001],c[1001],t,s,f[101][101];
int main(){
	cin>>m>>n;
	cin>>x;
	for(int i=1;i<=x;i++)
	cin>>a[i]>>b[i]>>c[i];
	for(int i=0;i<=100;i++)
	for(int j=0;j<=100;j++)
	f[i][j]=10001;
	f[0][0]=0;
	for(int i=1;i<=x;i++)
	for(int j=m;j>=0;j--)
	for(int k=n;k>=0;k--)
	{
		t=j+a[i];
		s=k+b[i];
		t=min(m,t);
		s=min(n,s);
		f[t][s]=min(f[t][s],f[j][k]+c[i]);
	}
	cout<<f[m][n];
	return 0;
}
