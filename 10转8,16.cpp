#include<iostream>
#include<stdio.h>
using namespace std;
int a;
int main(){
	while(cin>>a)
	if(a>=0) 
	printf("%o %x\n",a,a);
	else
	printf("-%o -%x\n",-a,-a);
	return 0;
}
