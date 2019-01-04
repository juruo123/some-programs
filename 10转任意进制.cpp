#include <iostream>
using namespace std;
long long n,k,i;
int a[100000];
char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; 
int main(){
	cin>>n>>k;
	for(i=0;n>0;i++)
	{
		a[i]=n%k;
		n=(n-a[i])/k;
	}
	i--;
	while(i>=0)
	cout<<b[a[i--]];
	return 0;
}
 