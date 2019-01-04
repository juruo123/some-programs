#include<bits/stdc++.h>
using namespace std;
double a;
int t,m,k;
bool n[20000001];
int main(){
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>t;
		for(int j=1;j<=t;j++)
		{
			k=a*j;
			if(n[k]==false)
			n[k]=true;
			else
			n[k]=false;
		}
	}
	for(int i=1;;i++)
	if(n[i]==true)
	{
		cout<<i;
		return 0;
	}
}

