#include<bits/stdc++.h>
using namespace std;
struct student{
	int num;
	int *next;
};
struct student *del(struct student *head,long long num)
{
	struct student *p1,*p2;
	if(head==NULL)
	{
		cout<<"this is null list"<<endl;
		return head;
	}
	p1=head;
	while(p1->num!=num&&p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	if(num==p1->num)
	{
		if(p1==head)
		head=p1->next;
		else
		p2->next=p1->next;
		cout<<"delete:"<<num<<endl;
		n=n-1;
	}
	else
	cout<<"not found"<<endl;
	return head;
}
int main(){
	
}
