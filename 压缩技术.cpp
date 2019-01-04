#include<bits/stdc++.h>
using namespace std;
int n,sum;
int main(){
	cin>>n;
	int i=0,m=0,k=0,f=0;
	while(1)
	{
		cin>>sum;
		i+=sum;
		if(i>=n*n)
		f=1;
		while(sum>0)
		{
			if(k==n)
			{
				cout<<"\n";
				k=0;
			}
			cout<<m;
			k++;
			sum--;
		}
		if(m==0)
		m=1;
		else
		m=0;
		if(f==1)
		break;
	}
	return 0;
}
