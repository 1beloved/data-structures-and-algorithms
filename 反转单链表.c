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

struct node *find(struct node *head,int n,int index)
{
	if(head==NULL){
		 printf("此值不存在");
		 return NULL;
	}
	if(head->num==n)
	{
		printf("下标为%d\n",index);
		return head;
	}
	return find(head->next,n,index+1);
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




void print(struct node *p)
{
	while(p)
	{
		printf("%d ",p->num);
		p=p->next;
	}
}

struct node *reverse(struct node *head)
{
	if(head==NULL||head->next==NULL) return head;
	struct node *f=head->next->next,*l=head,*t=head->next;
	head->next=NULL;
	while(t->next)//1 2 3 4 5 6
	{
		t->next=l;
		l=t;
		t=f;
		f=f->next;
	}
	t->next=l;
	head=t;
	
	return head;

}
struct node insert(struct node *head)
{
	
}
int main()
{
	struct node *head;
	int m;
//	scanf("%d",&m);
//	head=creat1(head,1,m);//这是输入一个整数自己创建
	head=creat2(head);//这是自己输入数值 
	print(head);
//	head=reverse(head);//这是反转 
	putchar(10);
//	print(head);
	putchar(10);
	int n;
	printf("亲输入");
	scanf("%")
	head=insert(head);
}
