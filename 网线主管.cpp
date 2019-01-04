#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int n,k,a[10001],l=1,r=-1;
double in;
int go(int mid)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	sum+=a[i]/mid;
	return sum>=k;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>in;
		a[i]=(int)(in*100);
		r=max(r,a[i]);
	}
	while(l<r)
	{
		int mid=(l+r)/2;
		if(go(mid))
		l=mid+1;
		else
		r=mid-1;
	}
	printf("%.2lf",l*1.0/100-0.01);
	return 0;
}
