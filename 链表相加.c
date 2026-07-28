#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct ListNode {
	int val;
 	struct ListNode *next;
};
struct ListNode* creat(struct ListNode *head)
{
	struct ListNode *p,*q;
	int n;
	printf("请输入链表的值(0为结束标志):\n"); 
	scanf("%d",&n);
	if(n==0) return;
	p=head=(struct ListNode*)malloc(sizeof(struct ListNode));
	p->val=n;
	p->next=NULL;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->val=n;
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
		printf("%d->",p->val);
		p=p->next;
	}
	printf("NULL\n"); 
}

struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2 ){
  	struct ListNode* head3,*p;
	int n,sum1=0,sum2=0;
	p=head1;
	while(p!=NULL)
	{
		n=p->val;
		sum1=sum1*10+n;
		p=p->next;
	}
	p=head2;
	printf("\n%d\n",sum1);
	while(p!=NULL)
	{
		n=p->val;
		sum2=sum2*10+n;
		p=p->next;
	}
	printf("%d\n",sum2);
	int sum3;
	sum3=sum1+sum2;
//	printf("\n%d\n",sum3);
	n=0,p=NULL;
	while(sum3)
	{
		head3=(struct ListNode*)malloc(sizeof(struct ListNode));
		head3->val=sum3%10;
		head3->next=p;
		p=head3;
		sum3/=10;
	}	
	return head3;
}

int main()
{
	struct ListNode* head1,*head2,*head3;
	head1=creat(head1);
	head2=creat(head2);
	head3=addInList(head1,head2);
	print(head1);
	print(head2);
	print(head3);
}
