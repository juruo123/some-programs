#include<bits/stdc++.h>
using namespace std;
int n,m,a[1001],ans=0,now,sum,i;
int cmp(int a,int b)
{
	return a>b;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++)
	cin>>a[i];
	sort(a,a+m,cmp);
	for(int i=0;i<m;i++)
	{
		now=a[i];
		sum=0;
		for(int j=0;j<m;j++)
			if(now<=a[j])
				sum+=now;
			else
				break;
		ans=max(ans,sum);
		if(ans>sum)
		{	
			now=a[i-1];
			break;
		}
	}
	cout<<now<<' '<<ans;
	return 0;
}
