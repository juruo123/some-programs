#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(){
	double a,b,l,ans1,minn=9999999,a1,b1;
	cin>>a>>b>>l;
	ans1=a/b;
	for(double i=1;i<=l;i++)
	{
		for(double j=1;j<=l;j++)
		{
			if(i/j>=ans1&&gcd(i,j)==1&&i/j-ans1<minn)
			{
				a1=i;
				b1=j;
				minn=i/j-ans1;
			}
			
		}
	}
	cout<<a1<<' '<<b1;
	return 0;
}
