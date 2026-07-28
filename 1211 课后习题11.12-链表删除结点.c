#include <stdio.h>
#include <malloc.h>

typedef struct node{
	int xh;
	int cj;
	struct node *next;
}stu;

stu *creat(stu *head,int n){
	if(n==0) return NULL;
	head=(stu*)malloc(sizeof(stu));
	scanf("%d%d",&head->xh,&head->cj);
	head->next=creat(head->next,n-1);
	return head;
}

stu *del(stu *head1,stu *head2)
{
	stu *a=head1,*b=head2,*pre=a;
	int flag=0; 
	while(a)
	{
		flag=0;
		b=head2;
		while(b)
		{
			if(a->xh==b->xh)
			{
				if(a==head1)
				{
					head1=head1->next;
					a=head1;flag=1;
					break;
				}
				else{
					pre->next=a->next;
					flag=1;
					a=pre->next;
					break;
				}
				
			}//这是相同时 
			b=b->next;	
		}
		if(flag) continue;
		pre=a;
		a=a->next;
		
	}
	return head1;
}
int c(stu *head)
{
	if(head==NULL) return 0;
	return 1+c(head->next);
}
void print(struct node *head){
	while(head)
	{
		printf("%d %d\n",head->xh,head->cj);
		head=head->next;
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	struct node *a,*b;
	a=creat(a,n);
	b=creat(b,m);
	a=del(a,b);	
	int count=0;
	count=c(a);
	printf("%d\n",count);
	print(a);
}
