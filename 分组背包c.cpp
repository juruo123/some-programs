#include<stdio.h>
int v,n,t,p,w[31],c[31],a[11][31],f[201],i,j,k;
int main()
{
	scanf("%d %d %d",&v,&n,&t);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&w[i],&c[i],&p);
		a[p][0]++;
		a[p][a[p][0]]=i;
	}
	for(i=1;i<=t;i++)
	for(j=v;j>=0;j--)
	for(k=1;k<=a[i][0];k++)
	if(j>=w[a[i][k]]&&f[j]<f[j-w[a[i][k]]]+c[a[i][k]])
	f[j]=f[j-w[a[i][k]]]+c[a[i][k]];
	printf("%d",f[v]);
	return 0;
}
