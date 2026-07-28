#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *creat_linklist(struct node *head)
{
	int n;
	scanf("%d",&n);
	if(n==0) return head;
	struct node *p;
	head=p=(struct node*)malloc(sizeof(struct node));
	p->data=n;
	p->next=NULL;
	while(1)
	{	
		scanf("%d",&n);
		if(n==0) break;
		struct node *q=(struct node*)malloc(sizeof(struct node));
		q->data=n;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	return head;
}

struct node *print_linklist(struct node *head)
{
	if(head==NULL) return head;
	struct node *q=head;
	while(q)
	{
		printf("%d ",q->data);
		q=q->next;
	}
}

struct node *reverse_linklist(struct node *head)
{
	if(head==NULL||head->next==NULL)
	{
		return head;
	}
	struct node *p,*q,*r;
	p=head;
	q=p->next;
	r=q->next;
	head->next=NULL;
	while(q)
	{
		q->next=p;
		p=q;
		q=r;
		if(r!=NULL)
		{
			r=r->next;
		}	
	}
	return p;
}

struct node *merge(struct node *head1,struct node *head2)
{
	if(head1==NULL)
	{
		return head2;
	}
	if(head2==NULL)
	{
		return head1;
	}
	struct node *p1,*p2,*head;
	if(head1->data<head2->data)
	{
		head=head1;
		p1=head->next;
		p2=head2;
	}
	else
	{
		head=head2;
		p1=head1;
		p2=head->next;
	}
	struct node *pcurrent=head;
	while(p1&&p2)
	{
		if(p1->data<p2->data)
		{
			pcurrent->next=p1;
			pcurrent=p1;
			p1=p1->next;
		}
		else
		{
			pcurrent->next=p2;
			pcurrent=p2;
			p2=p2->next;
		}
	}
	if(p1!=NULL)
	{
		pcurrent->next=p1;
	}
	if(p2!=NULL)
	{
		pcurrent->next=p2;
	}
	return head;	
}
struct node *merge2(struct node *head1,struct node *head2)
{
	if(head1==NULL||head2==NULL) return NULL;
	struct node *head,*p1,*p2,*tp;
	if(head1->data<head2->data)
	{
		head=head1;
		p1=head1->next;
		p2=head2;	
	}	
	else
	{
		head=head2;
		p1=head1;
		p2=head2->next;
	}

	
	while(p1&&p2)
	{
		if(p1->data>p2->data)
		{
			tp=p1;
			p1=p1->next;
			tp->next=head;
			head=tp;
		}
		else
		{
			tp=p2;
			p2=p2->next;
			tp->next=head;
			head=tp;
		}
	}
	
	if(p1!=NULL) tp=p1;
	if(p2!=NULL) tp=p2;

	struct node *p;
	while(tp)
	{
		p=tp;
		tp=tp->next;
		p->next=head;
		head=p;
	}
	return head;
}

int main()
{	
	struct node *head1=NULL;
	struct node *head2=NULL;
	printf("请输入链表的值:");
	head1=creat_linklist(head1);
	printf("请输入下个链表的值:");
	head2=creat_linklist(head2);
	struct node *head=merge(head1,head2);
	print_linklist(head);
}
