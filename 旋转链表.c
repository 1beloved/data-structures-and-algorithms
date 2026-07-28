#include <stdio.h>
#include <malloc.h>
struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *creat(struct ListNode *head)
{
	int n;
	scanf("%d",&n);
	if(n==0) return NULL;
	head=(struct ListNode *)malloc(sizeof(struct ListNode));
	head->val=n;
	head->next=creat(head->next);	
	return head;
}

int count(struct ListNode *head)
{
	if(head==NULL) return 0;
	if(head->next==NULL) return 1;
	return 1+count(head->next);
}
void print(struct ListNode *p)
{
	while(p)
	{
		printf("%d ",p->val);
		p=p->next;
	}
}

struct ListNode* rotateRight(struct ListNode* head, int k){ /// 1   ->   2   ->NULL
		if(head==NULL||head->next==NULL||k==0) return head;
	int n,i;
	n=count(head);
	if(k==n) return head;
	i=n-k%n-1;
	struct ListNode *p=head,*q;
	while(p->next!=NULL) p=p->next;
	p=p->next=head;
	while(i)
	{
		p=p->next;
		i--;
	}
	q=p->next;
	p->next=NULL;
	return q;
}
int main()
{
	struct ListNode *head;
	head=creat(head);
	print(head);
	printf("Ðý×ªºó:\n");
	head=rotateRight(head,1);
	print(head);
	
}
