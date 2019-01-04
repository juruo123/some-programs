#include<bits/stdc++.h>
using namespace std;
int flag=0,size=1;
char x,a[1001];
int main(){
	while(cin>>x)
	{
		a[size++]=x;
		for(int i=size-1;i>=0;i++)
		if(a[i]==')'&&a[i-1]=='('||a[i]==']'&&a[i-1]=='[')
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
	cout<<"Wrong";
	else
	cout<<"OK";
	return 0;
}
