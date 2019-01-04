#include<bits/stdc++.h>
using namespace std;
int n,r,q,a1,b1;
struct playerint{
	int num;
	int score;
	int power;
}p[200001],a[100001],b[100001];
int camp(playerint a,playerint b)
{
	if(a.score==b.score)
	return a.num<b.num;
	return a.score>b.score; 
}
int main(){
	cin>>n>>r>>q;
	for(int i=1;i<=2*n;i++)
	p[i].num=i,cin>>p[i].score;
	for(int i=1;i<=2*n;i++)
	cin>>p[i].power;
	sort(p+1,p+2*n+1,camp);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(p[2*j-1].power>p[2*j].power)
			{
				a[j]=p[2*j-1];
				a[j].score++;
				b[j]=p[2*j];
			}
			else
			{
				a[j]=p[2*j];
				a[j].score++;
				b[j]=p[2*j-1];
			}
		}
		a1=1;
		b1=1;
		while(a1<=n&&b1<=n)
		{
			if(a[a1].score>b[b1].score)
			{	
				p[a1+b1-1]=a[a1];
				a1++;
			}
			else if(a[a1].score<b[b1].score)
			{
				p[a1+b1-1]=b[b1];
				b1++;
			}
			else if(a[a1].num<b[b1].num)
			{
				p[a1+b1-1]=a[a1];
				a1++;
			}
			else
			{
				p[a1+b1-1]=b[b1];
				b1++;
			}
		}
		if(a1<=n)
		for(int j=a1;j<=n;j++)
		p[j+n]=a[j];
		else
		for(int j=b1;j<=n;j++)
		p[n+j]=b[j];
	}
	cout<<p[q].num;
	return 0;
}
