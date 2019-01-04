#include<bits/stdc++.h>
using namespace std;
int k,n,ans,a[10];
void print(){
	for(int i=0;i<k;i++)
	cout<<a[i]<<' ';
	cout<<endl;
}
void dfs(int p,int last,int sum)
{
	if(p==k)
	{
		if(sum==n)
		{
			ans++;
		//	print();
		}
		return;
	}
	for(int i=last;i*(k-p)<=n-sum;i++)
	{
		a[p]=i;
		dfs(p+1,i,sum+i);
	}
}
int main(){
	cin>>n>>k;
	dfs(0,1,0);
	cout<<ans;
	return 0;
}
