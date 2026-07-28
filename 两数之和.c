#include <stdio.h>
#include <malloc.h>
struct ListNode {
    int val;
   struct ListNode *next;
 };

print(struct ListNode *head)
{
	while(head)
	{
		printf("%d ",head->val);
		head=head->next;
	 } 
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p=l1,*q=l2,*h,*ptr,*ptrhead;
    int flag=0,first=1;
    while(p&&q)
    {
    	if(first)
    	{
    		first=0;
    		h=(struct ListNode *)malloc(sizeof(struct ListNode));
    		ptrhead=ptr=h;
			h->val=p->val+q->val;
    		flag=h->val/10;
    		h->val=h->val%10;
		}
    	else{
    		h=(struct ListNode *)malloc(sizeof(struct ListNode));
    		h->val=p->val+q->val+flag;
    		flag=h->val/10;
    		h->val=h->val%10;
    		ptr=ptr->next=h;
		}
    	p=p->next;q=q->next;
	}
    if(p==NULL&&q==NULL&&flag)
    {
    	h=(struct ListNode *)malloc(sizeof(struct ListNode));
    		ptr=ptr->next=h;
    	h->val=1;
    	h->next=NULL;
	}
	else if(p==NULL&&q!=NULL)
	{
		while(q)
		{
			h=(struct ListNode *)malloc(sizeof(struct ListNode));
			ptr=ptr->next=h;
			h->val=q->val+flag;
			flag=h->val/10;
			h->val=h->val%10;
			q=q->next;
		}
		if(flag)
		{
			h=(struct ListNode *)malloc(sizeof(struct ListNode));
				ptr=ptr->next=h;
    		h->val=1;
    		h->next=NULL;
		 } 
	}
	else{
		while(p)
		{
			h=(struct ListNode *)malloc(sizeof(struct ListNode));
			ptr=ptr->next=h;
			h->val=p->val+flag;
			flag=h->val/10;
			h->val=h->val%10;
			p=p->next;
		}
		if(flag)
		{
			h=(struct ListNode *)malloc(sizeof(struct ListNode));
				ptr=ptr->next=h;
    	h->val=1;
    	h->next=NULL;
		}
	}
	ptr->next=NULL;
	l1=ptrhead;
	return l1;		
}

struct ListNode *creat(struct ListNode *head)
{
	int i;
	scanf("%d",&i);
	if(i<0) return NULL;	
	head=(struct ListNode*)malloc(sizeof(struct ListNode));
	head->val=i;
	head->next=creat(head->next);
	return head;
}



int main()
{
	struct ListNode *head1,*head2;
	head1=creat(head1);
	head2=creat(head2);
	head1=addTwoNumbers(head1,head2);
	print(head1);
} 
