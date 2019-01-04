#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a1[1001];
int a[1001],c[1001];
int i,x=0,b,lena,lenc;
int main(){
	cin>>a1>>b;
	lena=strlen(a1);
	for(i=0;i<lena;i++)
	a[i+1]=a1[i]-'0';
	for(i=1;i<=lena;i++)
	{
		c[i]=(x*10+a[i])/b; 
		x=(x*10+a[i])%b;
	}
	lenc=1;
	while(c[lenc]==0&&(lenc<lena))
	lenc++;
	for(i=lenc;i<=lena;i++)
	cout<<c[i];
	cout<<" "<<x;
	return 0;
}
