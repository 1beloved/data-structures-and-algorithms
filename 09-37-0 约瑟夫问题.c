//n个人围成一圈玩报数游戏，
//每个人按顺序从1编号到n，
//每次报到m的人淘汰。
//输出淘汰的顺序
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct ListNode{
	int data;
	struct ListNode* next;
}Node;

struct ListNode* creatList(struct ListNode *head,int i)
{
	struct ListNode *p,*q;
	int n=1;
	head=p=(struct ListNode*)malloc(sizeof(struct ListNode));
	p->data=n++;
	p->next=NULL;
	while(n<=i)
	{
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->data=n++;
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

Node *yesu(Node *head,int m)
{
	if(head==NULL||head->next==NULL)
	{
		printf("链表只有一个或者无元素");
		return;
	}
	int count=1;
	Node *p,*q;
	p=q=head;
	while(p->next) p=p->next;
	p->next=head;
	p=q->next;
	while(p!=q)
	{
		if(count==m-1)
		{
			q->next=p->next;
			printf("出圈的是%d\n",p->data);
			free(p);
			count=0;
			p=q->next;
		}
		else{
			q=p;
			p=p->next;
			count++;
		}
	}
	printf("最后的元素是:%d",p->data); 
	
}


int main()
{
	struct ListNode* head;
	int i,m;
	scanf("%d %d",&i,&m);
	head=creatList(head,i);
	yesu(head,m);
}
