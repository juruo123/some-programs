#include<bits/stdc++.h>
using namespace std;
int n,in,heap[10000001][2],heap_size=0,now,a[100001],b[100001];
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void put(int k,int i)
{
	heap[++heap_size][0]=k;
	heap[heap_size][1]=i;
	now=heap_size;
	while(now>1)
	{
		if(heap[now][0]<heap[now/2][0])
		{
			swap(heap[now][0],heap[now/2][0]);
			swap(heap[now][1],heap[now/2][1]);
			now/=2;
		}
		else
		break;
	}
}
int get()
{
	int ans,next,num=heap[1][1],now=1;
	ans=heap[1][0];
	heap[1][0]=heap[heap_size][0];
	heap[1][1]=heap[heap_size--][1];
	while(now*2<=heap_size)
	{
		next=now*2;
		if(next<heap_size&&heap[next][0]>heap[next+1][0])
		next++;
		if(heap[now][0]<=heap[next][0])
		break;
		swap(heap[now][0],heap[next][0]);
		swap(heap[now][1],heap[next][1]);
		now=next;
	}
	put(ans-a[num]+a[++num],num);
	return ans;
}
int main(){
	//freopen("123.in","r",stdin);
	//freopen("123.out","w",stdout);
	int ans=0,num;
	cin>>n;
	heap_size=0; 
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		put(a[1]+b[i],1);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<get()<<' ';
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
