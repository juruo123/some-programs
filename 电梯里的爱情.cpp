#include<bits/stdc++.h>
using namespace std;
int a[20000000],n,x,ans=0,i,maxx=-99999,h=0;
int main(){
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a[x]++;
		maxx=max(maxx,x);
	}
	for(i=1;i<=maxx;i++)
	{
		if(a[i])
		{
			ans+=6*(i-h)+a[i]+5;
			h=i;
		}
	}
	cout<<ans+4*maxx;
	return 0;
}
