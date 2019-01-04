#include<bits/stdc++.h>
using namespace std;
int ans,n,size1,size2;
string a[40000];
int main(){
	while(cin>>a[++n]);
	n--;
	sort(a+1,a+n+1);
	ans=a[1].size();
	for(int i=2;i<=n;i++)
	{
		int j=0;
		while(a[i][j]==a[i-1][j])
		j++;
		ans+=a[i].size()-j;
	}
	cout<<ans+1;
	return 0;
}
