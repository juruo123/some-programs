#include<bits/stdc++.h>
using namespace std;
char a[100001];
int b[400001]={0},c[150001];
void abc(char x,int i)
{
	int k,j[4]={0};
	if(x>'9')
	k=x-'A'+10;
	else
	k=x-'0';
	for(int n=3;n>=0;n--)
	{
		j[n]=k%2;
		k/=2;
	}
	b[i*4]=j[0];
	b[i*4+1]=j[1];
	b[i*4+2]=j[2];
	b[i*4+3]=j[3];
}
int main(){
	cin>>a;
	for(int i=0;i<strlen(a);i++)
	{
		abc(a[i],i);
	}
	int m;
	m=strlen(a)*4%3;
	int k=0;
	for(int i=strlen(a)*4-1;i>m-1;i-=3)
	{
		c[k]=b[i]+2*b[i-1]+4*b[i-2];
		k++;
	}
	if(m==1)
	c[k]=b[0];
	if(m==2)
	c[k]=b[1]+2*b[0];
	int f=k;
	while(1)
	if(c[f]==0&&f>0)
	f--;
	else
	break;
	for(int i=f;i>=0;i--)
	cout<<c[i];
}
