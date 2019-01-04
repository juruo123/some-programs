#include<bits/stdc++.h>
using namespace std;
int m,n,k,p=1,in,k1,ans;
struct td{
	int num;
	int x;
	int y;
}a[401];
int comp(td a,td b)
{
    return a.num>b.num;
}

int main(){
	cin>>m>>n>>k;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>in;
		if(in)
		{
			a[p].num=in;
			a[p].x=i;
			a[p++].y=j;
		}
	}
	sort(a+1,a+p,comp);
	a[0].x=0;
	a[0].y=a[1].y;
	for(int i=1;i<p;i++)
	if(k1+abs(a[i-1].x-a[i].x)+abs(a[i-1].y-a[i].y)+a[i].x+1<=k)
	{
		ans+=a[i].num;
		k1+=abs(a[i-1].x-a[i].x)+abs(a[i-1].y-a[i].y)+1;
	}
	else
	break;
	cout<<ans;
	return 0;
}
