#include<bits/stdc++.h>
using namespace std;
int n,a[1001],sum,now,no;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			if(no>0)
			{
				now-=pow(2,no-1);
				no=0;
				if(now<0)
				now=0;
			}
			now++;
			if(now<3)
			sum+=1;
			else
			if(now<7)
			sum+=2;
			else
			if(now<30)
			sum+=3;
			else
			if(now<120)
			sum+=4;
			else
			if(now<365)
			sum+=5;
			else
			sum+=6;
		}
		else
		{
			no++;
			continue;
		}
	}
	cout<<sum;
}
