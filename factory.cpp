#include<bits/stdc++.h>
using namespace std;
int n,jgtime,lqtime;
struct thing
{
	int x,y;
}th[1001];
int cmp(thing a,thing b)
{
	return a.y>b.y;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>th[i].x>>th[i].y;
	sort(th+1,th+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		jgtime+=th[i].x;
		lqtime=th[i-1].y-th[i].x;
		if(lqtime>th[i].y)
		th[i].y=lqtime;
	}
	if(th[n-1].y-th[n].x<=th[n].y)
	cout<<jgtime+th[n].y;
	else
	cout<<jgtime+th[n-1].y-th[n].x;
	return 0;
}
