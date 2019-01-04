#include<iostream>
#include<string.h>
using namespace std;
char a1[1001];
int b,a[1001],la,x;
int main(){
	while (cin>>a1>>b)
	{
		x=0;
		la=strlen(a1);
		for(int i=0;i<la;i++)
		a[i+1]=a1[i]-'0';
		for(int i=1;i<=la;i++)
		x=(x*10+a[i])%b;
		cout<<x<<endl;
		memset(a1,0,sizeof(a1));
	}
	return 0;
}

