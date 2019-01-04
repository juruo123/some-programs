#include<bits/stdc++.h>
using namespace std;
int n;
double x,y,xx,yy,s,a;
int main(){
	cin>>n>>a;
	for(int i=1;i<=n;i++)
	{
		cin>>xx>>yy;
		s+=sqrt(pow(abs(x-xx),2)+pow(abs(y-yy),2));
		x=xx;
		y=yy;
	}
	cout<<round(sqrt(s*2/a));
	return 0;
}
