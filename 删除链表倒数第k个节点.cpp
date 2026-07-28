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

struct node *del(struct node *head,int k,int m)
{
	if(m==k)
	{	
		return head;		
	}
	struct node *p;
	p=del(head->next,k,m-1);
	p->next=p->next->next;
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
	struct node *head;
	int m;
	scanf("%d",&m);
	head=creat1(head,1,m);//这是输入一个整数自己创建
print(head);
int n;
scanf("%d",&n);
head=del(head,n,m);
print(head);

}
