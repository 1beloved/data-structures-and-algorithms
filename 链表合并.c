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

Node *merge(Node *h1,Node *h2)
{
	
	/*1 2 4
	1 3 4*/
	Node *head;
	if(h1==NULL) return h2;
	if(h2==NULL) return h1;
	if(h1->data<h2->data)
	{
		head=h1;
		head->next=merge(h1->next,h2);	
	}else{
		head=h2;
		head->next=merge(h1,h2->next);
	}
	return head;
	
} 
Node *insert(Node *head)
{
	Node *p=head,*q;
	int i=1;
	while(p)
	{
		if(i==3)
		{
			q=(Node *)malloc(sizeof(Node));
			q->data=',';
			q->next=p->next;
			p->next=q;
			p=q->next;
			i=1;
		}
		p=p->next;
		i++;
	}
	return head;
}

Node *insert2(Node *head,int n)
{
	Node *p=head,*q;
	if(head==NULL||head->next==NULL) return head;
	while(n>0)
	{
		p=p->next;
		n--;
	}
	q=(Node *)malloc(sizeof(Node));
	q->data=',';
	q->next=p->next;
	p->next=q->next;
	q->next=(p,3);
	return head;
}





struct ListNode* print(struct ListNode*head)
{
	struct ListNode *p=head;
	while(p)
	{
		if(p->data==',') printf(",");
		else printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n"); 
}


int main()
{
	struct ListNode* head,*head2,*head3;
	head=creat(head);
	head2=creat(head2);
	head3=merge(head,head2);
//	head=insert2(head,3);
	print(head);
}
