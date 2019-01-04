#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	while(1)
	{
		cin>>n;
		if(n==0)
		return 0;
		double sum=n;
		for(int i=2;i<=n;i++)
		sum+=1.0/i*(n-i+1)*2;
		printf("%0.2lf\n",sum);
	}
}
