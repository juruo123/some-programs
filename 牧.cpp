#include<bits/stdc++.h>
using namespace std;
unsigned long long a[100001],a1[100001],b[100001],b1[100001],k,n,m,sum,f;
int zs(int x){
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0)
	return 0;
	return 1;
}
int main(){
	cin>>k;
	for(int x=0;x<k;x++)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		for(int i=1;i<=m;i++)
		cin>>b[i];
		sort(a+1,a+1+n);
		sort(b+1,b+1+m);
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		if(a[i]==b[j]&&a1[i]==0&&b1[j]==0)
		{
			a1[i]=1;
			b1[j]=1;
			break; 
		}
		sum=0;
		for(int i=1;i<=n;i++)
			if(a1[i]==0&&a[i]!=1)
			{
				sum++;
				f=a[i];
			}
		if(sum==1&&zs(f))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
