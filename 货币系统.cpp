#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100001],f[100001];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i];
	f[0]=1;
	for(int i=0;i<n;i++)
	for(int j=a[i];j<=m;j++)
	f[j]+=f[j-a[i]];
	cout<<f[m];
	return 0;
}
