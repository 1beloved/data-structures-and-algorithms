#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3 
typedef struct ListNode{
	int data;
	int num;
	struct ListNode* next;
}Node;

struct ListNode* creat(struct ListNode *head,int a)
{
	struct ListNode *p,*q;
	int n;
	printf("请输入链表的值(0为结束标志):\n"); 
	scanf("%d",&n);
	if(n==0) return;
	p=head=(struct ListNode*)malloc(sizeof(struct ListNode));
	p->data=n;
	a--;
	p->next=NULL;
	while(a)
	{
		scanf("%d",&n);
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->data=n;
		p->next=q;
		p=p->next;
		a--;
	}
	p->next=NULL;
	return head;
}


struct ListNode* print(struct ListNode*head)
{
	struct ListNode *p=head;
	while(p)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n"); 
}

Node *yesu(Node *head)
{
	Node *p=head,*q;
	int count=1,j=1,a[14],i;
	while(p->next!=NULL) p=p->next;
	p->next=head;
	q=p; 
	while(p)
	{
		q=p;
		p=p->next;
		count++;
		if(count%j==0)
		{
			q->next=p->next;
			printf("%d  ",p->data);
			a[p->data]=j;
			free(p);
			p=q->next; 
			j++;
			count=1;
		}
		if(p==q)
		break; 
	}
	printf("%d\n",p->data);
	a[p->data]=j;
	for(i=1;i<14;i++)
	printf("%d  ",a[i]);
}


int main()
{
	Node *head;
	int n;
	printf("输入节点数:");
	scanf("%d",&n);
	if(n<2)
	printf("节点数太少!!!");
	else
	{
		head=creat(head,n);
		yesu(head);
	}
}
