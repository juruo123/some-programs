#include <stdio.h>//头文件 
#include <string.h>//头文件 
int a[101]={0},b[101]={0},c[101]={0};//定义变量 
int i,f=0;//同上 
void init(int a[])//高精输入 
{
	char s[101];
	gets(s);//输入字符串 
	a[0]=strlen(s);
	for(i=1;i<=a[0];i++)
		a[i]=s[a[0]-i]-'0';//字符串变数字 
} 
void print(int a[])//输出 
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
int compare(int a[],int b[])//比较a和b的大小关系 
{
	int i;
	if(a[0]>b[0])//a的位数大于b，则a比b大 
		return 1;
	if(a[0]<b[0])//a的位数小于b，则a比b小 
		return -1;
	for(i=a[0];i>0;i--)
	{
		if(a[i]>b[i])
			return 1;
		if(a[i]<b[i])
			return -1;
	}
	return 0;	//每位都相同则为0 
}
void jian(int a[],int b[])//计算a=a-b 高精减法，因为位数太多不能直接除，他们都是按一个数一个数除的 
{
	int flag,i;
	flag=compare(a,b);//判断两个数大小 
	if(flag==0)//相等 
	{
		a[0]=0;
		return;
	}
	if(flag==1)//大于 
	{
		for(i=1;i<=a[0];i++)
		{
			if(a[i]<b[i])
			{
				a[i+1]--;
				a[i]+=10;//若不够减则向上借一位 
			}
			a[i]-=b[i];
		}
	while(a[0]>0&&a[a[0]]==0)//修正a的位数 
		a[0]--;
	return;
	} 
}
void numcpy(int p[],int q[],int det)//复制p到q，从det位置开始 
{
	int i;
	for(i=1;i<=p[0];i++)
		q[i+det-1]=p[i];
	q[0]=p[0]+det-1;
}

void chufa(int a[],int b[],int c[])
{
	int i,j,tmp[101];
	c[0]=a[0]-b[0]+1;//除法的结果长度计算 
	for(i=c[0];i>0;i--)
	{
		memset(tmp,0,sizeof(tmp)); 
		numcpy(b,tmp,i);
		while(compare(a,tmp)>=0)//用减法来模拟 
		{
			c[i]++; 
			jian(a,tmp);
		}		
	}
	while(c[0]>0&&c[c[0]]==0)
		c[0]--;
	return;
} 
int main()//主函数疯狂调用上面那么大一串的子函数 
{
	init(a);//输入 
	init(b);//输出 
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
