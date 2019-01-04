#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,n,a[100]={0},sum=0,book[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n-2;i++)
	for(j=i+1;j<n-1;j++)
	for(k=i+2;k<n;k++)
	if(a[i]+a[j]==a[k]&&book[k]==0)
	{
		sum++;
		book[k]++;
	}
	cout<<sum;
}
