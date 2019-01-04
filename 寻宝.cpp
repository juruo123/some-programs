#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[10001][101][2],l[10001],k,s,sum,q;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=0;j<m;j++)
	{
		cin>>a[i][j][0]>>a[i][j][1];
		l[i]+=a[i][j][0];
	}
	cin>>k;
	for(int now=1;now<=n;now++)
	{
		ans=(ans+a[now][k][1])%20123;
		s=(a[now][k][1]-1)%l[now]+1;
		sum=0;
		q=k;
		while(sum<s)
		{
			sum+=a[now][k][0];
			if(sum==s)
			break;
			k++;
			if(k==m)
			k=0;
		}
	}
	cout<<ans%20123;
	return 0;
} 
