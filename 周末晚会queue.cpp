#include<bits/stdc++.h>
using namespace std;
queue<int> q1,q2;
int n,m,k;
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<k;i++)
	{
		q1.push(i%n+1);
		q2.push(i%m+1);
		cout<<q1.front()<<" "<<q2.front()<<endl;
		q1.pop();
		q2.pop();
	}
	return 0;
}
