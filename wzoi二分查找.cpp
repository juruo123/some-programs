#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001],ans,l,r,middle,f,p;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cin>>p;
	for(int g=1;g<=p;g++)
	{
		cin>>m;
		l=1;
		r=n;
		f=0;
		while(r>=l)
		{
			middle=(l+r)/2;
			if(a[middle]>m)
			r=middle-1;
			else
			if(a[middle]<m)
			l=middle+1;
			else
			if(a[middle]==m&&a[middle-1]!=m)
			{
				f=1;
				cout<<middle<<endl;
				break;
			}
			else
			r=middle-1;
		}
		if(f==0)
		cout<<-1<<endl;
	}
}
