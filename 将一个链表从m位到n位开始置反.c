#include <stdio.h>
#include <stdlib.h>
#include <time.h>
static int count=0; 
struct ListNode{
	int data;
	struct ListNode* next;
};

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
	count++;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->data=n;
		p->next=q;
		p=p->next;
		count++;
	}
	p->next=NULL;
	return head;
}

struct ListNode* reverse(struct ListNode* head, int m, int n)
{
	struct ListNode *x,*ptr,*p,*q,*start;
	if(n==m) return head;
	if(m!=1&&n!=count)
	{
		p=head;
		start=head; 
		int i;
		for(i=0;i<m-1;i++)
		{
			start=p;
			p=p->next;
		}
		x=p;
		q=p->next;
		ptr=q->next;
		for(i=0;i<n-m;i++)
		{
			q->next=p;
			p=q;
			q=ptr;
			ptr=ptr->next;
		}
		start->next=p;
		x->next=q;
	}
	else if(n!=count)
	{
		int i;
		p=head;
		q=p->next;
		ptr=q->next;
		for(i=0;i<n-m;i++)
		{
			q->next=p;
			p=q;
			q=ptr;
			ptr=ptr->next;
		}
		head->next=q;
		head=p;
	}
	else
	{
//		printf("来过");
		p=head;
		q=p->next;
		ptr=q->next;
		while(ptr)
		{
			q->next=p;
			p=q;
			q=ptr;
			ptr=ptr->next;
		}
		q->next=p;
		head->next=NULL;
		head=q;
	}
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
	print(head);
	int m,n;
	printf("请输入你开始的位置:"); 
	scanf("%d",&m); 
	printf("请输入你结束的位置:"); 
	scanf("%d",&n);
	if(n>=m&&n<=count)
	{
		head=reverse(head,m,n);
		printf("反转之后的链表是:\n");
		print(head);
	}
	else
	printf("输入错误!!!!!");
			
}
