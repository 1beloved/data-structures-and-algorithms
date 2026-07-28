#include <stdio.h>
#include <malloc.h>
typedef struct node{
	int co;
	int ex;
	struct node *next;
}Node;

Node *creat(Node *head,int n)
{
	if(n==0) return NULL;
	head=(Node*)malloc(sizeof(Node));
	scanf("%d%d",&head->co,&head->ex);
	head->next=creat(head->next,n-1);
	return head;
}


void print(Node *head)
{
	while(head)
	{
		printf("%d %d ",head->co,head->ex);
		head=head->next;
	}
 } 


Node *merge(Node *head1,Node *head2)
{
	Node *head,*p;
	if(head1->ex>head2->ex){
		head=head1;
		head1=head1->next;
	}
	else if(head2->ex>head1->ex){
		head=head2;
		head=head2->next;
	}
	else
	{
		head=(Node *)malloc(sizeof(Node));
		head->co=head1->co+head2->co;
		head->ex=head1->ex;
		head1=head1->next;
		head2=head2->next;
	}
	p=head;
	while(head1&&head2)
	{
			if(head1->ex>head2->ex){
			p=p->next=head1;
			head1=head1->next;
			}
		else if(head2->ex>head1->ex){
			p=p->next=head2;
			head2=head2->next;
		}
		else
		{
			p=p->next=head1;
			p->ex=head1->ex;
			p->co=head1->co+head2->co;
			head1=head1->next;
			head2=head2->next;
		}
	}
	if(head1==NULL) p->next=head2;
	if(head2==NULL) p->next=head1;
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
