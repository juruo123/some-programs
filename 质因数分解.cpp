#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,m=2;
	cin>>a;
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<a/i;
			return 0;
		}
	}
}
