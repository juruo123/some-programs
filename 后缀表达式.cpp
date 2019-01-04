#include<bits/stdc++.h>
using namespace std;
int a[1001],sum=0,size;
char x;
int main(){
	while(cin>>x)
	{
		if(x=='@')
		break;
		if(x>='0'&&x<='9')
		sum=sum*10+(x-'0');
		else
		{
			if(x=='.')
			{
				a[size++]=sum;
				sum=0;
			}
			if(x=='+')
			{
				a[size-2]=a[size-1]+a[size-2];
				size--;
			}
			if(x=='-')
			{
				a[size-2]=a[size-2]-a[size-1];
				size--;
			}if(x=='*')
			{
				a[size-2]=a[size-1]*a[size-2];
				size--;
			}if(x=='/')
			{
				a[size-2]=a[size-2]/a[size-1];
				size--;
			}
		}
	}
	cout<<a[0];
	return 0;
} 
