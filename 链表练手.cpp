#include<bits/stdc++.h>
using namespace std;
struct student{
	int num;
	double score;
	student* next;
};
int main(){
	struct student a,b,c,*p;
	a.num=1;
	b.num=2;
	c.num=3;
	a.score=90;
	b.score=85.5;
	c.score=100;
	p=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	while(p!=NULL)
	{
		cout<<p->num<<" "<<p->score<<endl;
		p=p->next;
	}
	return 0;
}
