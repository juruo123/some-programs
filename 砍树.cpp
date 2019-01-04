#pragma GCC optimize(3)
#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001],mid,l,r=-1,ans,maxx=-99999999,sum;
bool k(int ){
	long long d=0;
	for(int i=1;i<=n;i++)
	if(a[i]>mid)
	d+=a[i]-mid;
	return d>=m;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		r=max(a[i],r);
	}
	l=1;
	while(l<r)
	{
		ans=0;
		mid=(l+r)/2;
		if(k(mid))
		l=mid+1;
		else
		r=mid;
	}
	cout<<mid;
	return 0;
}
