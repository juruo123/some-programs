#include<stdio.h>
long a,b,c,ans=1;
int main(){
	scanf("%ld %ld %ld",&a,&b,&c);
	a%=c;
	while(b>0)
	{
		if(b%2)
		ans=(ans*a)%c;
		b/=2;
		a=(a*a)%c;
	}
	printf("%ld",ans);
	return 0; 
}
