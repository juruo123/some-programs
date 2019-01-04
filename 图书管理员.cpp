#include<bits/stdc++.h>
using namespace std;
int n,q,a[1001],b[1001][2],minn;
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=q;i++)
	cin>>b[i][0]>>b[i][1];
	for(int i=1;i<=q;i++)
	{
		minn=999999999;
		for(int j=1;j<=n;j++)
		{
			if(a[j]%int(pow(10,b[i][0]))==b[i][1]&&a[j]<minn)
			minn=a[j];
		}
		if(minn==999999999)
		cout<<"-1"<<endl;
		else
		cout<<minn<<endl;
	}
	return 0;
}
