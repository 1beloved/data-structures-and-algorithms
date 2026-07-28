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

Node *mp(Node *head)
{
	Node *p,*tail;
	int t;
	p=head;tail=NULL;
	while(head!=tail)
	{
//		printf("alive");
		p=head;
		while(p->next!=tail)
		{
			if(p->data>p->next->data)
			{t=p->data;p->data=p->next->data;p->next->data=t;}
			p=p->next;
		}
		tail=p;
	}
	return head;
}
struct ListNode *Max(Node *head)//56 33 1 32 0
{
	Node *h;
	if(head==NULL||head->next==NULL)
	return head;
	h=Max(head->next);
	if(head->data<h->data)
	{
		head->next=h;
		return head;
	}
	head->next=h->next;
	h->next=head;
	return h;

}

Node *diguimp(Node *head)
{
	if(head==NULL||head->next==NULL)  return head;
	head=Max(head);
	head->next=Max(head->next);
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
	head=diguimp(head);
	print(head);
}
