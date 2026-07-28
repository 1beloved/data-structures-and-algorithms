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

Node *Move_left(Node *head,int i)
{
	int sumlen=1;
	Node *p=head,*q=head;
	while(p->next){p=p->next;sumlen++;}
//	printf("%d",sumlen);
	p->next=head;
	int len=sumlen-i;
	while(len)
	{
		q=head;
		head=head->next;
		len--;
	}
	q->next=NULL;
	return head;
}

Node *Move_right(Node *head,int i)
{
	int sumlen=1;
	Node *p=head,*q=head,*newhead=head;
	while(p->next){p=p->next;sumlen++;}
	int len=sumlen-i-1;
	while(len--)
	{
		q=q->next;
		head=head->next;
	}
	head=head->next;
	q->next=NULL;
	p->next=newhead;
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
	int i;
	struct ListNode* head;
	head=creat(head);
	printf("请输入你要移的位数:\n");
	scanf("%d",&i);
	head=Move_left(head,i);
	print(head);
}
