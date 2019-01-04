#include<bits/stdc++.h>
using namespace std;
long a[1000001],top=1,sum=0;
char b[1000001];
int main(){
	cin>>b;
	for(int i=0;i<strlen(b);i++)
	{
		if(b[i]>='0'&&b[i]<='9')
		sum=sum*10+b[i]-'0';
		else
		if(b[i]=='+')
		{
			if(a[top-1]==-2)
			{
				a[top-2]=a[top-2]%10000*sum%10000;
				top--;
			}
			else
			a[top++]=sum;
			sum=0;
			a[top++]=-1;
		}
		else
		{
			if(a[top-1]==-2)
			{
				a[top-2]=a[top-2]%10000*sum%10000;
				top--;
			}
			else
			a[top++]=sum;
			sum=0;
			a[top++]=-2;
		}
	}
	if(a[top-1]==-2)
	{
		a[top-2]=a[top-2]%10000*sum%10000;
		top--;
	}
	else
	a[top++]=sum;
	for(int i=top-1;i>0;i--)
	{
		if(a[i]==-1)
		{
			a[i-1]=a[i-1]%10000+a[i+1]%10000;
			i--;
		}
	}
	cout<<a[1]%10000;
	return 0;
}
