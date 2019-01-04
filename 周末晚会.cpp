#include<bits/stdc++.h>
using namespace std;
int q1[10001],q2[10001],head1,head2,tail1,tail2,n,m,k;
int main(){
	cin>>n>>m>>k;
	head1=1;
	head2=1;
	tail1=n+1;
	tail2=m+1;
	for(int i=1;i<=n;i++)
	q1[i]=i;
	for(int i=1;i<=m;i++)
	q2[i]=i;
	for(int i=1;i<=k;i++)
	{
		cout<<q1[head1]<<" "<<q2[head2]<<endl;
		q1[tail1]=q1[head1];
		q2[tail2]=q2[head2];
		head1++;
		head2++;
		tail1++;
		tail2++; 
	}
	return 0;
}
