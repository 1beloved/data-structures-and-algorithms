#include <stdio.h>
#include <malloc.h>
typedef struct node{
	int num;
	struct node *next;
}Node;

Node *creat(Node *head,int n) 
{
	if(n==0) return NULL;
	head=(Node *)malloc(sizeof(Node));
	head->next=creat(head,n-1);
	scanf("%d",&head->num);
	return head;
}

putlist(Node *head)
{
	Node *p=head;
	while(p)
	{
		printf("%d ",p->num);
		p=p->next; 
	}
}

int main()
{
	Node *head;
	int i;
	scanf("%d",&i);
	head=creat(head,i);
	putlist(head);

}
