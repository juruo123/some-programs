#include<bits/stdc++.h>
using namespace std;
long long m[25][25],ax,ay,bx,by,flag[25][25];
void p(int a,int b)
{
	if(a>=2&&b>=1) flag[a-2][b-1]=1;
    if(a>=2) flag[a-2][b+1]=1;
    if(a>=1&&b>=2) flag[a-1][b-2]=1;
    if(a>=1) flag[a-1][b+2]=1;
    if(b>=2) flag[a+1][b-2]=1;
    flag[a+1][b+2]=1;
    if(b>=1) flag[a+2][b-1]=1;
    flag[a+2][b+1]=1;
    flag[a][b]=1;
}
int main(){
	cin>>ax>>ay>>bx>>by;
	p(bx,by);
	m[0][0]=1;
	for(int i=0;i<=ax;i++)
	for(int j=0;j<=ay;j++)
	if(!flag[i][j])
	m[i][j]=m[i-1][j]+m[i][j-1];
	cout<<m[ax][ay];
	return 0;
}
