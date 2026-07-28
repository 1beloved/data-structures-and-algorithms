#include <stdio.h>
#include <malloc.h>
typedef struct node{
	int num;
	int cj; 
	struct node *next;
}Node;

Node *creat(Node *head,int n)
{
	if(n==0) return NULL;
	head=(Node*)malloc(sizeof(Node));
	scanf("%d%d",&head->num,&head->cj);
	head->next=creat(head->next,n-1);
	return head;
}


void print(Node *head)
{
	while(head)
	{
		printf("%d %d\n",head->num,head->cj);
		head=head->next;
	}
 } 

Node *paixu(Node *head)
{
	Node *p=head,*q;
	int t,t1;
	for(;p;p=p->next)
		for(q=p->next;q;q=q->next)
		{
			if(q->num<p->num)
			{
				t=p->num;t1=p->cj;
				p->num=q->num;p->cj=q->cj;
				q->num=t;q->cj=t1;
			}
		}
	return head;
	
}

Node *merge(Node *head1,Node *head2)
{
	if(head1==NULL) return head2;
	if(head2==NULL) return head1;
	Node *head,*p;
	if(head1->num<head2->num)
	{
		head=head1;
		p=head;
		head1=head1->next;
	}
	else
	{
		head=p=head2;
		head2=head2->next;
	}
	while(head1&&head2)
	{
		if(head1->num<head2->num)
		{
			p=p->next=head1;
			head1=head1->next;
		}
		else{
			p=p->next=head2;
			head2=head2->next;
		}
	}
	if(head1==NULL) p->next=head2;
	else if(head2==NULL) p->next=head1;
	else
	p->next=NULL;
	return head;
}

int main()
{
	Node *head1,*head2,*head3;
	int n,m;
	scanf("%d%d",&n,&m); 
	head1=creat(head1,n);
	head2=creat(head2,m);
	head1=paixu(head1);
	paixu(head2);
	head3=merge(head1,head2);
	print(head3);
	
	
	
}
