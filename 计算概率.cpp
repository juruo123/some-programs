#include<bits/stdc++.h>
using namespace std;
long long n,l,a[100001],i,j,ans=0;
int main(){
	cin>>n>>l;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	i=0;
	j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]<=l)
		{
			ans+=j-i;
			i++;
			continue;
		}
		j--;
	}
	printf("%.2lf",ans*1.0/(n*(n-1)/2));
	return 0;
}
