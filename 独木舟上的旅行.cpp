#include<bits/stdc++.h>
using namespace std;
int w,n,a[30001],b[30001],ans;
int main(){
	cin>>w>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--)
	{
		for(int j=i-1;j>=0;j--)
		if(b[i]==0&&(b[j]==0||j==0)&&a[i]+a[j]<=w)
		{
			b[i]=1;
			b[j]=1;
			ans++;
			break;
		}
	}
	cout<<ans;
	return 0;
}
