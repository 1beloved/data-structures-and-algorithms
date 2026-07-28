#include <stdio.h>
#include <malloc.h>
typedef struct node{
	int num;
	struct node *next;
}Node;

Node *creat(Node *head,int n)
{
	if(n==0) return NULL;
	head=(Node*)malloc(sizeof(Node));
	scanf("%d",&head->num);
	head->next=creat(head->next,n-1);
	return head;
}


void print(Node *head)
{
	while(head)
	{
		printf("%d ",head->num);
		head=head->next;
	}
 } 
// 2 4 5 6 
// 1 3 7

Node *merge(Node *head1,Node *head2)
{
	if(head1==NULL) return head2;
	if(head2==NULL) return head1;
	Node *head;
	if(head1->num<head2->num) {
		head=head1;
		head->next=merge(head1->next,head2);
	}
	else
	{
		head=head2;
		head->next=merge(head1,head2->next); 
	}
	return head;
}

int main()
{
	Node *head1,*head2,*head3;
	int n;
	scanf("%d",&n); 
	head1=creat(head1,n);
	scanf("%d",&n); 
	head2=creat(head2,n);
	head3=merge(head1,head2);
	print(head3);
	
	
	
}
