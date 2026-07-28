#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev; 
};

struct node *create_linklist(struct node *head)
{
	int n;
	scanf("%d",&n);
	if(n==0) return head;
	
	struct node *q;
	head=q=(struct node*)malloc(sizeof(struct node));
	q->data=n;
	q->next=q;
	q->prev=q;
	
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		struct node *p=(struct node*)malloc(sizeof(struct node));
		p->data=n;
		q->next=p;
		p->prev=q;
		p->next=head;
		head->prev=p;
		q=p;
	}
	
	return head;
}

struct node *print_linklist(struct node *head)
{
	if(head==NULL) return head;
	struct node *p=head;
	printf("Ë³Ğò£º");
	while(1)
	{
		printf("%d ",p->data);
		p=p->next;
		if(p==head) break;	
	}	
	printf("\nÄæĞò£º");
	p=p->prev;
	if(p==head)
	{
		printf("%d",p->data);
		return;
	}
	while(1)
	{
		printf("%d ",p->data);
		p=p->prev;
		if(p==head) 
		{	
			printf("%d",p->data);
			break;
		}
	} 
}

int main()
{
	struct node *head=NULL;
	head=create_linklist(head);
	print_linklist(head);
}
