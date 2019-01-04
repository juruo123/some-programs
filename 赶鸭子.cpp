#include<bits/stdc++.h>
using namespace std;
int n,m,summ;
int duck(int sum,int now)
{
	if(now==n)
	return sum;
	else
	return duck((sum-1)/2,now+1);
}
int fuck(int sum,int now)
{
	if(now==1)
	return sum;
	else
	return fuck((sum-1)*2,now-1);
}
int main(){
	cin>>n>>m;
	summ=fuck(m,5);
	cout<<duck(summ,1);
	return 0;
}
