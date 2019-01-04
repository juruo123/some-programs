#include<bits/stdc++.h>
using namespace std;
int m[101],p[101],f[101],t,n,a;
int main(){
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		memset(f,0,sizeof(f));
		cin>>n>>a;
		for(int j=1;j<=n;j++)
		cin>>m[j];
		for(int j=1;j<=n;j++)
		cin>>p[j];
		for(int j=1;j<=n;j++)
		for(int k=0;k<=j;k++)
		if(m[j]-m[k]>a||k==0)
		f[j]=max(f[j-1],f[k]+p[j]);
		cout<<f[n]<<endl;
	}
	return 0;
}
