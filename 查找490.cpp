#include<bits/stdc++.h>
using namespace std;
string s[10001];
int n,m,flag;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		for(int j=1;j<=m;j++)
		cin>>s[j];
		sort(s+1,s+m+1);
		int flag=1;
		for(int j=1;j<=m;j++)
		if(int(s[j+1].find(s[j]))==0&&s[j+1]!=s[j])
		{
			cout<<"NO"<<endl;
			flag=0;
			break;
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
