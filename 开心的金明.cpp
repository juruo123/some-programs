#include<bits/stdc++.h>
using namespace std;
int m,n,v[26],w[26],f[30001];
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
		w[i]=v[i]*w[i];
	}
	for(int i=1;i<=n;i++)
	for(int j=m;j>=0;j--)
	if(j>=v[i])
	f[j]=max(f[j],f[j-v[i]]+w[i]);
	cout<<f[m];
}
