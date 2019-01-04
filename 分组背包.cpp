#include<bits/stdc++.h>
using namespace std;
int v,n,t,p,w[31],c[31],a[11][31],f[201];
int main(){
	cin>>v>>n>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>c[i]>>p;
		a[p][0]++;
		a[p][a[p][0]]=i;
	}
	for(int i=1;i<=t;i++)
	for(int j=v;j>=0;j--)
	for(int k=1;k<=a[i][0];k++)
	if(j>=w[a[i][k]])
	f[j]=max(f[j],f[j-w[a[i][k]]]+c[a[i][k]]);
	cout<<f[v];
	return 0;
}
