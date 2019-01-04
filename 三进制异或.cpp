#include<bits/stdc++.h>
using namespace std;
int n,m,ans,b[100000],stra,strc;
char a[100000],c[100000];
int main(){
	cin>>n>>m;
	for(int i=0;n>0;i++)
	{
		a[i]=n%3;
		n/=3;
		stra++;
	}
	for(int i=0;m>0;i++)
	{
		c[i]=m%3;
		m/=3;
		strc++;
	}
	for(int i=0;i<max(stra,strc);i++)
	{
		b[i]=c[i]-a[i];
		if(b[i]<0)
		b[i]+=3;
	}
	for(int i=0;i<max(stra,strc);i++)
	ans+=b[i]*pow(3,i);
	cout<<ans;
	return 0;
}
