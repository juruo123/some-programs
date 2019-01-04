#include<bits/stdc++.h>
using namespace std;
int v,n,w[31],c[31],p[31],f[301];
int main(){
	cin>>v>>n;
	for(int i=1;i<=n;i++)
	cin>>w[i]>>c[i]>>p[i];
	for(int i=1;i<=n;i++)
	if(p[i]==0)
	for(int j=w[i];j<=v;j++)
	f[j]=max(f[j],f[j-w[i]]+c[i]);
	else
	for(int j=1;j<=p[i];j++)
	for(int k=v;k>=w[i];k--)
	f[k]=max(f[k],f[k-w[i]]+c[i]);
	cout<<f[v];
	return 0;
}
