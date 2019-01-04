#include<bits/stdc++.h>
using namespace std;
int a,b,ans,k;
int gcd(int n,int m)
{
	if(m==0)
	return n;
	else
	return gcd(m,n%m);
}
int main(){
	cin>>a>>b;
	for(int i=a;i<=sqrt(a*b);i+=a)
	{
		k=a*b/i;
		if(gcd(i,k)==a&&i*k==a*b)
		ans++;
	}
	cout<<ans*2;
	return 0; 
}
