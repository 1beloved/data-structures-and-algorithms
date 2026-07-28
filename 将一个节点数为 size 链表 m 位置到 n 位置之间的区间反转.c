#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct ListNode {
 	int val;
 	struct ListNode *next;
};

//struct ListNode* reverseBetween(struct ListNode* head, int m, int n )
//{
//	return head; 
//	
//}

struct ListNode *list_Creat(struct ListNode *head)
{
	struct ListNode *p,*q;
	int i;
	puts("输入链结点的值");
	scanf("%d",&i);
	if(i==0) return;
	q=p=head=(struct ListNode*)malloc(sizeof(struct ListNode));
	p->val=i;
	p->next=0;
	while(i)
	{
		scanf("%d",&i);
		if(i==0) return;
		p=(struct ListNode*)malloc(sizeof(struct ListNode));
		p->val=i;
		p->next=0;
		q->next=p;
		q=q->next;	
	}
	q->next=0;
	return head;
 } 

struct ListNode print_List(struct ListNode *head)
{
	struct ListNode *p=head;
	while(p!=NULL)
	{
		printf("%d->",p->val);
		p=p->next;
	}
	printf("NULL"); 
}


int main()
{
	struct ListNode *head;
	head=list_Creat(head);
	int m,n;
	printf("请输入你开始的位置:"); 
	scanf("%d",&m); 
	printf("请输入你结束的位置:"); 
	scanf("%d",&n);
//	head=reverseBetween(head,m,n);
	print_List(head);
 } 
