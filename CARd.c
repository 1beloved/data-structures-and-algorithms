#include <stdio.h>
#include <stdlib.h>
#include <time.h>
static int N=1;
typedef struct ListNode{
	int data;
	int num;
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
Node *Card(Node *head)
{
	Node *p=head,*q=head->next;
	while(p->next){
		p=p->next;
	}
	p->next=head;
	p=head;
	int count=1,j=1;
	while(N!=13)
	{
		if(count==N)
		{
			printf("第%d淘汰的是%d\n",j,p->data);
			p->next=q->next;
			q->num=j++;
			free(q);
			count=1;
			p=q->next;
			q=p->next;
			N++;
		}
		else{
			p=q;
			q=q->next;
			count++;
		}
	}
	
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
	Card(head);
	print(head);
}
