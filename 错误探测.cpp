#include<bits/stdc++.h>
using namespace std;
int a[101][101],b,c,fb,fc,n,m;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
		a[0][j]=(a[0][j]+a[i][j])%2;  
        a[i][0]=(a[i][0]+a[i][j])%2; 
	}
	for(int i=1;i<=n;i++){
		if(a[i][0]>0)
		{
			fb=i;
			b++;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[0][i]>0)
		{
			fc=i;
			c++;
		}
	}
	if(b==0&&c==0)
	{
		cout<<"OK";
		return 0;
	}
	if(b==1&&c==1)
	{
		cout<<fb<<' '<<fc;
		return 0;
	}
	cout<<"Corrup";
}
