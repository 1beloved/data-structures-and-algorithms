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
	if(n==-1) return NULL;
	head=(struct ListNode *)malloc(sizeof(struct ListNode));
	head->val=n;
	head->next=creat(head->next);
	return head;
	
}
void print(struct ListNode *head)
{
	while(head)
	{
		printf("%d ->",head->val);
		head=head->next;
	 } 
	 printf("NULL");
}

struct ListNode* swapPairs(struct ListNode* head){
    if(head==NULL||head->next==NULL) return head;
    struct ListNode *pre=head,*p=pre->next,*mid=pre;
	head=p;
	pre->next=p->next;
	p->next=pre;
	pre=pre->next;
	if(pre==NULL||pre->next==NULL) return head;
 	mid->next= swapPairs(pre);
	return head;
}


int main()
{
	struct ListNode *head;
	head=creat(head);
	print(head);
	putchar(10);
	head=swapPairs(head);
	print(head);
}
