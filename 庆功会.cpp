#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,c,k[100000][2],l=0;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		int j=1;
		while(c>=j)
		{
				k[++l][0]=a*j;
				k[l][1]=b*j;
				c-=j; 
				j*=2;
		}
		k[++l][0]=a*c;
		k[l][0]=b*c;
	}
	int f[20001];
	for(int i=1;i<=l;i++)
	for(int j=m;j>k[i][0];j--)
	f[j]=max(f[j],f[j-k[i][0]]+k[i][1]);
	cout<<f[m];
	return 0;
}
