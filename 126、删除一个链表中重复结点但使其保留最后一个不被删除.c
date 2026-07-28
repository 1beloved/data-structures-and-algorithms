#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}NODE;


NODE *delete(NODE *head)
{
	NODE *p,*q,*k;
	k=head;
	if(head==NULL||head->next==NULL) return head;
	for(p=head->next;p;p=p->next)
	{
		for(q=head;q<p;q=q->next)
		{
			if(q->data==p->data)
				break;
		}
		if(q==p) k=k->next=p;
	}
	k->next=NULL;
	return head;
}
NODE *print(NODE *head)
{
	NODE *p=head;
	while(p)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL");
}

NODE *creat(NODE *head)
{
	NODE *p,*q;
	int n;
	scanf("%d",&n);
	if(n<0) return; 
	p=head=(NODE*)malloc(sizeof(NODE));
	p->data=n;
	q=p;
	p->next=NULL;
	while(n)
	{
		scanf("%d",&n);
		if(n<=0) break;
		p=(NODE*)malloc(sizeof(NODE));
		p->data=n;
		q->next=p;
		q=p; 	
	}	
	q->next=NULL;
	return head;
}
int main()
{
	NODE *head;
	head=creat(head);
	head=delete(head);
	print(head);
} 
