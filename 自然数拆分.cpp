#include<bits/stdc++.h>
using namespace std;
long long X=2147483648;
unsigned long long f[5001],n;
int main(){
	cin>>n;
	f[0]=1;
	for(int i=1;i<n;i++)
	for(int j=i;j<=n;j++)
	f[j]=(f[j]+f[j-i])%X;
	X-=2;
	cout<<X<<endl;
	cout<<f[n];
}
