#include<bits/stdc++.h>
using namespace std;
double n,sum;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	sum+=(sqrt(5)/5*(pow((1+sqrt(5))/2,i+2)-pow((1-sqrt(5))/2,i+2)))/(sqrt(5)/5*(pow((1+sqrt(5))/2,i+1)-pow((1-sqrt(5))/2,i+1))); 
	cout<<fixed<<setprecision(4)<<sum;
	return 0;
}


