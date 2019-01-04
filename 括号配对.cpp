#include<bits/stdc++.h>
using namespace std;
int size=1,n;
char x,a[10001],b[10001];
int main(){
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		size=1;
		for(int i=1;i<=10001;i++)
		a[i]=' ';
		cin>>b;
		for(int j=0;j<strlen(b);j++)
		{
			x=b[j];
			if(x=='('||x==')'||x=='['||x==']'||x=='{'||x=='}')
			a[size++]=x;
			for(int i=size-1;i>=0;i++)
			if(a[i]==')'&&a[i-1]=='('||a[i]==']'&&a[i-1]=='['||a[i]=='}'&&a[i-1]=='{')
			{
				a[i]=' ';
				a[i-1]=' ';
				size-=2;
				i-=2;
			}
			else
			break;
		}
		if(a[1]!=' ')
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
	}
	return 0;
}
