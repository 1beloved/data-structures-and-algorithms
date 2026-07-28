#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ListNode{
	int data;
	struct ListNode* next;
}Node;

struct ListNode* creat(struct ListNode**head)
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

Node *delete(Node *head,int n)
{
	Node *p,*q;
	p=q=head;
	while(p&&p->data==n)//1->1->2->1->4->6->NULL
	{
		q=p;
		p=p->next;
	}
	if(head!=p)
		q->next=NULL;
	head=p;
	q=p;
	p=p->next;
	while(p)
	{
		if(p->data==n)
			q->next=p->next;
		else
			q=p;
		p=p->next;
	}
	return head;
}


Node *delete2(Node *head,int n)
{
	Node *p,*h;
	p=h=NULL;
	while(head)
	{
		if(head->data!=n)
		{
			if(p==NULL){
				h=head;		
			}
			else{
				p->next=head->next;
			}
		}
		head=head->next;
	}
	p->next=NULL;
	return h;
	
}
int main()
{
	struct ListNode* head;
	head=creat(head);
//	print(head);
	int n;
	printf("请输入你要删除的值:\n");
	scanf("%d",&n);
	head=delete(head,n);
	print(head);
}
