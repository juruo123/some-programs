#include<bits/stdc++.h>
using namespace std;
int n,in,heap[100001],heap_size=0,now;
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void put(int k)
{
	heap[++heap_size]=k;
	now=heap_size;
	while(now>1)
	{
		if(heap[now]<heap[now/2])
		{
			swap(heap[now],heap[now/2]);
			now/=2;
		}
		else
		break;
	}
}
int get()
{
	int ans,next;
	ans=heap[1];
	heap[1]=heap[heap_size--];
	now=1;
	while(now*2<=heap_size)
	{
		next=now*2;
		if(next<heap_size&&heap[next]>heap[next+1])
		next++;
		if(heap[now]<=heap[next])
		return ans;
		swap(heap[now],heap[next]);
		now=next;
	}
	return ans;
}
int main(){
	//freopen("123.in","r",stdin);
	//freopen("123.out","w",stdout);
	cin>>n;
	heap_size=0; 
	for(int i=1;i<=n;i++)
	{
		cin>>in;
		put(in);
	}
	for(int i=1;i<=n;i++)
	cout<<get()<<" ";
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
