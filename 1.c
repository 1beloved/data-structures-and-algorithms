#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ListNode{
	int data;
	struct ListNode* next;
}Node;

struct ListNode* creat(struct ListNode *head)
{
	struct ListNode *p,*q;
	int n;
	printf("请输入链表的值(0为结束标志):\n"); 
	scanf("%d",&n);
	if(n==0) return;
	p=head=(struct ListNode*)malloc(sizeof(struct ListNode));
	p->data=n;
	p->next=NULL;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->data=n;
		p->next=q;
		p=p->next;
	}
	p->next=NULL;
	return head;
}

Node *max(Node *head)
{
	if(head==NULL||head->next==NULL) return head;
	Node *p;
	p=max(head->next);
	if(p->data>head->next)
	{
		head->next=p->next;
		p->next=head;
		return p;
	}
	head->next=p;
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


int main()
{
	struct ListNode* head;
	head=creat(head);
	head=max(head);
	print(head);
}
