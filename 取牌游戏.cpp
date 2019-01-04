#include<bits/stdc++.h>
using namespace std;
int n,k,p,ans[50001],f=0;
queue<int> q;
int main(){
	cin>>n>>k>>p;
	for(int i=1;i<=k;i++)
	q.push(i);
	for(int i=1;i<=k;i++)
	{
		if(i%n==0)
		ans[++f]=q.front();
		q.pop();
		for(int j=1;j<=p;j++)
		{
			q.push(q.front());
			q.pop();
		}
	}
	sort(ans,ans+f);
	for(int i=1;i<=f;i++)
	cout<<ans[i]<<endl; 
}
