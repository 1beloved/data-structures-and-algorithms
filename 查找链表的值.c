#include <stdio.h>
#include <malloc.h>
struct node{
	int num;
	struct node *next;
};

struct node *creat1(struct node *head,int n,int m)
{
	 if(n>m) return NULL;
	 head=(struct node *)malloc(sizeof(struct node));
	 head->num=n;
	head->next=creat1(head->next,n+1,m);
	return head;
}


struct node *creat2(struct node *head)
{
	int n;
	scanf("%d",&n);
	if(n==0) return NULL;
	head=(struct node *)malloc(sizeof(struct node));
	head->num=n;
	head->next=creat2(head->next);	
	return head;
}

struct node *find(struct node *head,int n)
{
	if(head->next==NULL) return head;
	struct node *p=head;
	if(p->next->num<n){
		p=find(head->next,n);
		return p;
	}	 
	return head;
}


void print(struct node *p)
{
	while(p)
	{
		printf("%d ",p->num);
		p=p->next;
	}
}


int main()
{
	struct node *head,*p;
//	int m;
//	scanf("%d",&m);
//	head=creat1(head,1,m);//这是输入一个整数自己创建
	head=creat2(head);//这是自己输入数值 
	print(head);
	int n;
	scanf("%d",&n);
	p=find(head,n);
	printf("%d",p->num);
	
}
