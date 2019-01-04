#include<bits/stdc++.h>
using namespace std;
int sum,a,b;
char in;
int main(){
	cin>>a;
	a%=10000;
	while(cin>>in)
	{
		cin>>b;
		b%=10000;
		if(in=='+')
		{
			sum=(a+sum)%10000;
			a=b;
		}
		if(in=='*')
		{
			a*=b;
			a%=10000;
		}
	}
	sum+=a;
	cout<<sum%10000;
	return 0;
}
