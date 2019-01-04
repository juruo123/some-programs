#include<bits/stdc++.h>
using namespace std;
int n,flag;
int m(int sum,int k)
{
	sum-=k;
	if(sum<0)
	{
		flag=1;
		return 0;
	}
	if(sum==0)
	{
		cout<<k;
		for(int i=k-1;i>0;i--)
		cout<<','<<i;
		return 0;
	}
	else
	return m(sum,k+1);
}
int main(){
	cin>>n; 
	m(n,1);
	if(flag==1)
	cout<<-1;
	return 0;
}
