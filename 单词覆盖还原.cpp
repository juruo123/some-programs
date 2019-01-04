#include<bits/stdc++.h>
using namespace std;
char a[256];
int ans1=0,ans2=0;
int main(){
	scanf("%s",a);
	for(int i=0;i<strlen(a)-2;i++)
	{
		if(a[i]=='b'||a[i+1]=='o'||a[i+2]=='y') ans1++;
		if(a[i]=='g'||a[i+1]=='i'||a[i+2]=='r'||a[i+3]=='l') ans2++;
	}
	printf("%d\n%d",ans1,ans2);
	return 0;
}
