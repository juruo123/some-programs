#include<bits/stdc++.h>
using namespace std;
int n;
struct student{
	int num;
	double score;
	student* next;
};
struct student* creat()
{
	struct student *head,*p1,*p2;
	n=0;
	p1=(struct student *)malloc(sizeof(struct student));
	cin>>p1->num>>p1->score;
	head=NULL;
	while(p1->num!=0)
	{
		n++;
		if(n==1)
		head=p1;
		else
		p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		cin>>p1->num>>p1->score;
	}
	p2->next=NULL;
	return head;
}
int main(){
	struct student* p;
	p=creat();
	while(p!=NULL)
	{
		cout<<p->num<<" "<<p->score<<endl;
		p=p->next;
	}
	return 0;
}
