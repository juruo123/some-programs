#include <stdio.h>//ͷ�ļ� 
#include <string.h>//ͷ�ļ� 
int a[101]={0},b[101]={0},c[101]={0};//������� 
int i,f=0;//ͬ�� 
void init(int a[])//�߾����� 
{
	char s[101];
	gets(s);//�����ַ��� 
	a[0]=strlen(s);
	for(i=1;i<=a[0];i++)
		a[i]=s[a[0]-i]-'0';//�ַ��������� 
} 
void print(int a[])//��� 
{
	int i;
	if(a[0]==0)
	{
		printf("0\n");
		return;
	}
	for(i=a[0];i>0;i--)
		printf("%d",a[i]);
	printf("\n");
}
int compare(int a[],int b[])//�Ƚ�a��b�Ĵ�С��ϵ 
{
	int i;
	if(a[0]>b[0])//a��λ������b����a��b�� 
		return 1;
	if(a[0]<b[0])//a��λ��С��b����a��bС 
		return -1;
	for(i=a[0];i>0;i--)
	{
		if(a[i]>b[i])
			return 1;
		if(a[i]<b[i])
			return -1;
	}
	return 0;	//ÿλ����ͬ��Ϊ0 
}
void jian(int a[],int b[])//����a=a-b �߾���������Ϊλ��̫�಻��ֱ�ӳ������Ƕ��ǰ�һ����һ�������� 
{
	int flag,i;
	flag=compare(a,b);//�ж���������С 
	if(flag==0)//��� 
	{
		a[0]=0;
		return;
	}
	if(flag==1)//���� 
	{
		for(i=1;i<=a[0];i++)
		{
			if(a[i]<b[i])
			{
				a[i+1]--;
				a[i]+=10;//�������������Ͻ�һλ 
			}
			a[i]-=b[i];
		}
	while(a[0]>0&&a[a[0]]==0)//����a��λ�� 
		a[0]--;
	return;
	} 
}
void numcpy(int p[],int q[],int det)//����p��q����detλ�ÿ�ʼ 
{
	int i;
	for(i=1;i<=p[0];i++)
		q[i+det-1]=p[i];
	q[0]=p[0]+det-1;
}

void chufa(int a[],int b[],int c[])
{
	int i,j,tmp[101];
	c[0]=a[0]-b[0]+1;//�����Ľ�����ȼ��� 
	for(i=c[0];i>0;i--)
	{
		memset(tmp,0,sizeof(tmp)); 
		numcpy(b,tmp,i);
		while(compare(a,tmp)>=0)//�ü�����ģ�� 
		{
			c[i]++; 
			jian(a,tmp);
		}		
	}
	while(c[0]>0&&c[c[0]]==0)
		c[0]--;
	return;
} 
int main()//������������������ô��һ�����Ӻ��� 
{
	init(a);//���� 
	init(b);//��� 
	if(a[0]<b[0])
	{
		printf("0\n");
		for(i=a[0]-1;i>=1;i--)
		{
			if(a[i]!=0)
				f=1;
			if(f==1);
				printf("%d",a[i]);
		}	
		return 0;
	}
	chufa(a,b,c);
	print(c);
	print(a);
	return 0;
}
