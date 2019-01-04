#include<bits/stdc++.h>
using namespace std;
int k[1001][201],n,m,a,b,root,max0,max1;
int main(){
	cin>>n>>m;
	cin>>a>>b;
	root=a;
	k[a][++k[a][0]]=b;
	if(k[a][0]>max0)
	{
		max0=k[a][0];
		max1=a;
	}
	for(int i=2;i<=m;i++)
	{
		cin>>a>>b;
		if(b==root)
		root=a;
		k[a][++k[a][0]]=b;
		if(k[a][0]>max0)
		{
			max0=k[a][0];
			max1=a;
		}
	}
	cout<<root<<endl<<max1<<endl;
	for(int i=1;i<=max0;i++)
	cout<<k[max1][i]<<' ';
	return 0;
}
