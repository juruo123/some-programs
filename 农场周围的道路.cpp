#include<bits/stdc++.h>
using namespace std;
int n,k;
int f(int m)
{
	if(m>k&&(m-k)%2==0&&(m+k)%2==0)
	return f((m-k)/2)+f((m+k)/2);
	return 1;
}
int main(){
	cin>>n>>k;
	cout<<f(n);
	return 0;
}
