#include<bits/stdc++.h>
using namespace std;
int a[10],n,x,ans;
int main(){
	cin>>n>>x;
	for(int i=0;i<=7;i++)
	a[i]=pow(10,i);
	for(int i=1;i<=n;i++)
	for(int j=0;j<=7;j++)
	if(i/a[j]%10==x&&i/a[j]>=1)
	ans++;
	cout<<ans;
	return 0; 
} 
