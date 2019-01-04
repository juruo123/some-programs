#include<bits/stdc++.h>
using namespace std;
int n,a[150001],b[1500001]/*有多少个数小于这个数*/,c[1500001]/*最后一个小于这个数的位置*/,ans;
int main(){
	cin>>n;
	memset(a,1000000001,sizeof(a));
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		c[i]=i;
		int flag=0;
		for(int j=i+1;j<=n;j++)
		{
			if((a[c[i]+1]<a[j]||a[i]==a[j])&&flag==0)
			{
				flag=1;
				c[i]=j-1;
			}
			if(a[i]>a[j])
			{
				b[i]+=b[j]+1;
				if(flag==0)
				c[i]=c[j];
				j=c[j];
			}	
		}
		
	}
	for(int i=1;i<=n;i++)
	ans+=b[i];
	cout<<ans;
}
