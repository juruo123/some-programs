#include<bits/stdc++.h>
using namespace std;
int w,n,sum=0,a[30001],i,j;
int main(){
	cin>>w>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	i=1;
	j=n;
	while(i<=j)
	{
		if(a[i]+a[j]<=w)
		{
			sum++;
			i++;
			j--;
		}
		else
		{
			sum++;
			j--;
		}
	}
	cout<<sum;
	return 0;
}
