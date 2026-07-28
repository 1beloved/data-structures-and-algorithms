#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ListNode{
	int data;
	struct ListNode* next;
}Node;

struct ListNode* creatList(struct ListNode *head)
{
	struct ListNode *p,*q;
	int n;
	scanf("%d",&n);
	if(n==-1) return;
	head=(struct ListNode*)malloc(sizeof(struct ListNode));
	p=(struct ListNode*)malloc(sizeof(struct ListNode));
	head->next=p;
	p->data=n;
	p->next=NULL;
	while(1)
	{
		scanf("%d",&n);
		if(n==-1) break;
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->data=n;
		p->next=q;
		p=p->next;
	}
	p->next=NULL;
	return head;
}



struct ListNode* print(struct ListNode*head)
{
	struct ListNode *p=head;
	p=p->next;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}


int main()
{
	struct ListNode* head;
	head=creatList(head);
	print(head);
}
