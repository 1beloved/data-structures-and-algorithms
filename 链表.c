#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node* creat_link(struct node *head)
{
	int n;
	scanf("%d",&n);
	if(n==0) return;
	struct node *p;
	head=p=(struct node*)malloc(sizeof(struct node));
	p->data=n;
	p->next=NULL;
	while(1){
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

struct node *reverse(struct node *head)
{
	struct node *p,*q,*r;
	p=head;
	q=p->next;
	r=q->next ;
	head->next=NULL;
	while(q)
	{
		q->next=p;
		p=q;
		q=r;
		if(r!=NULL) r=r->next;
	}
	return p;
} 

struct node* print_link(struct node* head)
{
	struct node *p=head;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

struct node *merge(struct node* head1,struct node *head2){
	struct node *p,*q,*r;
	if(head1->data<head2->data) p=head1,q=head2; 
	
}

int main()
{
	struct node *head1;
	head1=creat_link(head1);
	struct node *head2;
	head2=creat_link(head2);
	putchar(10);
	struct node *head=merge(head1,head2);
	print_link(head); 
	
}



 
