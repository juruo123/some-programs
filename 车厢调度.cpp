#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],size=1,now=1,flag;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		while(a[i]>=now)
		{
			b[size++]=now;
			now++;
		}
		if(b[size-1]==a[i])
		{
			size--;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
