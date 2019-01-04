#include<bits/stdc++.h>
using namespace std;
int r,b,c,d,e,maxx=-9999999;
int main(){
	cin>>r>>b>>c>>d>>e;
	for(int i=0;i<=min(r,b);i++)
	maxx=max((r-i)*c+(b-i)*d+i*e*2,maxx);
	cout<<maxx;
}
