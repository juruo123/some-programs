#include<bits/stdc++.h>
using namespace std;
long long a[1000001],n,m,head,tail,two,three,t1,t2,t;
int main(){
	while(cin>>n>>m)
	{
		a[1]=n;
		head=1;
		tail=2;
		two=1;
		three=1;
		for(int i=1;tail<=m;i++)
		{
			t1=a[two]*2+1;
			t2=a[three]*3+1;
			t=min(t2,t1);
			if(t1<t2)
			two++;
			else
			three++;
			if(t!=a[tail-1])
			a[tail++]=t;
		}
		cout<<a[m];
	}
	return 0;
}
