#include<bits/stdc++.h>
using namespace std;
char a[5001],l=0,r,i;
int main(){
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i+1]==' '&&a[i]!=' ')
		{
			for(r=i;r>=l;r--)
			cout<<a[r];
			cout<<" ";
			l=i+1;
		}
		else
		if(a[i+1]==' '&&a[i]==' ')
		{
			cout<<" ";
			l=i+1;
		}
	}
	for(r=i-1;r>=l;r--)
	cout<<a[r];
	printf("\n"); 
	return 0;
}
