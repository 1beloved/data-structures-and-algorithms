#include<stdio.h>
#include<stdlib.h> 
#define N 3
struct node 
{int num;
struct node *next;
};
int put(struct node *head)  //输出  
{
	while(head->num!=0)
	{	printf("%2d",head->num);
		head=head->next;
	}
}
struct node *fun(struct node *head,int n) //创建链表 
{	struct node *p,*q;
	while(n<=1) //输入值最少要为2  
	{
		printf("节点太少重新输入:");
		scanf("%d",&n);
	}
	p=q=head=(struct node*)malloc(sizeof(struct node)); //创建头节点  
	scanf("%d",&head->num);
	
	while(n) 
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->num);
		q->next=p;
		q=p;
		n--;
	}
	q->next=NULL; 
	return head;
}
void isfun(struct node *head,int n)
{	struct node *p,*q;
	int count=0;
	q=p=head;
	while(q) //q指向NULL,p指向最后一个节点  
	{
		p=q;
		q=q->next;
	}
	p->next=head;//使其首尾相连，此时q指向head  
	p=head;
	while(n!=1)
	{
		count++;
		if(count==N) //删除第三个节点  
		{
			q->next=p->next;p=q->next;count=0;n--; 
		}
	else
	{
		q=p;p=p->next;//q在p的前面  
	}
	}
	q->next=NULL;
	printf("\n%d",q->num); 
}
int main()
{
	struct node *head;
	int n;
	printf("请输入链表的节点数："); 
	scanf("%d",&n);
	head=fun(head,n-1);
	isfun(head,n);
} 

