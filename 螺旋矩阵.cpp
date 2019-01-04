#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int search(int i,int j,int n)
{
	if(i==1)
	return j;
	if(j==n)
	return n+i-1;
	if(i==n)
	return 3*n-j-1;
	if(j==1)
	return 4*(n-1)-i+2;
	return 4*(n-1)+search(i-1,j-1,n-2);
}
int main(){
	cin>>n>>i>>j;
	cout<<search(i,j,n);
	return 0;
}
