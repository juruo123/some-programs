#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],l,r,mid,ans;
int m(int g){
	int d=0;
	for(int i=1;i<=n;i++)
	d+=a[i]/g;
	return d>=k;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	l=0;
	r=100000000;
	while(l<r)
	{
		mid=(l+r)/2;
		if(m(mid))
		{
			ans=mid;
			l=mid+1;
		}
		else
		r=mid;
	}
	cout<<ans;
	return 0;
}
