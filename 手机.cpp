#include<bits/stdc++.h>
using namespace std;
char a[201];
int main(){
	int b[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4},j=0;
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' ')
		{
			j++;
			continue;
		}
		if('a'<=a[i]&&a[i]<='z') 
		j+=b[a[i]-'a'];
	}
	cout<<j;
	return 0;
}
