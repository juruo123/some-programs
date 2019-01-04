#include<bits/stdc++.h>
using namespace std;
int n,m=1;
int zs(int x){
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0)
	return 0;
	return 1;
}
int main(){
	cin>>n;
	for(int i=2;i<=n;i++)
	if(zs(i)&&zs(n-i))
	cout<<m++<<" "<<n<<"="<<i<<"+"<<n-i<<endl;
	return 0;
}
