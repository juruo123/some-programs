#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int a,b,c,d,sum=0;
char j,k;
int p(int i)
{
	if(i==1)
	k=rand()%10+48;
	if(i==2)
	k=rand()%26+97;
	if(i==3)
	k=rand()%26+65;
	printf("%c",k);
	sum++;
	return 0;
}
int main()
{
	printf("���������볤�ȣ��Ƿ������֣��Ƿ���Сд��ĸ���Ƿ��д�д��ĸ\n����������0��ʾ�ޣ���1��ʾ�У���");
	cin>>a>>b>>c>>d;
	srand((unsigned)time(NULL));
	while(sum<a)
	{
		j=rand()%128+1;
		if(b==1&&j>=1&&j<=43)
		p(1);
		if(c==1&&j>=44&&j<=86)
		p(2);
		if(d==1&&j>=87&&j<=128)
		p(3);
	}
	cin>>a;
	return 0;
}
