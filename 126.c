#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}NODE;


NODE *delete(NODE *head)
{
	int i,j,k,n;
	NODE *p,*q,*ptr;
	p=head;
	while(p)
	{
		ptr=p;
		q=ptr->next;
		while(q)
		{
			if(q->data==p->data)
			{
					ptr->next=q->next;
					free(q);
					q=ptr->next;
			}
			else
			{
				q=q->next;
				ptr=ptr->next;
			}
		}
		p=p->next;
	}
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
