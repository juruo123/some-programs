#include<bits/stdc++.h>
using namespace std;
int n,x[51],y[51],r[51],a[51],x1,y3,x2,y2,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>x[i];
	for(int i=1;i<=n;i++)
	cin>>y[i];
	for(int i=1;i<=n;i++)
	cin>>r[i];
	cin>>x1>>y3>>x2>>y2;
	for(int i=1;i<=n;i++)
	{
		if(sqrt(pow(x1-x[i],2)+pow(y3-y[i],2))<r[i])
		{
			ans++;
			a[i]=1;
		}
		if(sqrt(pow(x2-x[i],2)+pow(y2-y[i],2))<r[i])
		{
			if(a[i]==1)
			ans--;
			else
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
