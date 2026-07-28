#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};

struct node *create7()
{
	struct node *h,*p,*s;
	int i;
	h=p=(struct node *)malloc(sizeof(struct node));
	for(i=1;i<5;i++)
	{  s=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&s->data);
	p->next=s;
	p=p->next;}
	       p->next=NULL;
	return h;
};

struct node *create6()
{
	struct node *head=NULL,*tail;
	int a;
	tail=(struct node *)malloc(sizeof(struct node));
	do{
	  scanf("%d",&a);
	  if(a!=0){if(head==NULL)head=tail;else tail=tail->next;
	       tail->data=a;
	  	     tail->next=(struct node *)malloc(sizeof(struct node));}
	  	else tail->next=NULL;
	}while(a!=0);
	return head;
};
struct node *create(int n)//反向 
{
	struct node *head,*p;
	head=NULL;
	while(n)
	{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=head;
		head=p;
		n--;
	}
	return head;
}
struct node *create1(int n)//反向 
{
	struct node *head,*p;
    head=p=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&p->data);
	n--;
	head->next=NULL;
	while(n)
	{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=head;
		head=p;
		n--;
	}
	return head;
}
struct node *create2(int n)//反向 
{
	struct node *head,*p;
	int t=n;
	while(n)
	{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		if(n==t)head=NULL;
		p->next=head;
		head=p;
		n--;
	}
	return head;
}
struct node *create3(int n)//递归反向 
{
	struct node *head;
	if(n==0)return NULL;
	head=(struct node *)malloc(sizeof(struct node));
	head->next=create3(n-1);
	scanf("%d",&head->data);
	return head;
}
struct node *create4(int n)//正向 
{
	struct node *head,*p1,*p2;
	head=p1=p2=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&p1->data);
	n--;
	while(n)
	{
		p2=p1;
		p1=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p1->data);
		p2->next=p1;
		n--;
	}
	p1->next=NULL;
	return head;
}
struct node *create5(int n)//正向创建一个环(尾结点勾着头) 
{
	struct node *head,*p1,*p2;
	head=p1=(struct node *)malloc(sizeof(struct node));
	//scanf("%d",&p1->data);
	n--;
	while(n)
	{
		p2=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p2->data);
		p2->next=p1;p1->next=p2;
		n--;
	}
	p1->next=NULL;
	return head;
}
struct node *fx(struct node *head)
{
	struct node *p1,*p2;
	p1=NULL;
	p2=head->next;
	while(p2)
	{
		head->next=p1;
		p1=head;
		head=p2;
		p2=p2->next;
	}
	head->next=p1;
	return head;
} 
struct node *fx1(struct node *head)
{
	struct node *p1,*p2;
	p1=NULL;
	p2=head;
	while(p2)
	{	p2=p2->next;
		head->next=p1;
		p1=head;
		head=p2;
	}
	return p1;
} 
void put(struct node *head)
{
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
struct node *merge1(struct node *h1,struct node *h2)
{
	struct node *head,*tail;
	if(h1==NULL)return h2;
	if(h2==NULL)return h1;
	head=tail=(struct node*)malloc(sizeof(struct node));
	while(h1&&h2)
	{
		if(h1->data<h2->data)
		{
	    	tail=tail->next=h1;
			h1=h1->next;
		}else{
			tail=tail->next=h2;
			h2=h2->next;
		}		
	}
	if(h1)tail->next=h1;
	else tail->next=h2;
	tail=head;
	head=head->next;
	free(tail);
	return head;
}

struct node *rfun(struct node *head)//右移 
{
	struct node *p1;
	if(head==NULL||head->next==NULL)return head;
	p1=head;
	while(p1->next->next)
	{
		p1=p1->next;
	}
	p1->next->next=head;head=p1->next;
	p1->next=NULL;
		return head;
}

struct node *delfun(struct node *head,int m)
{
	struct node *p,*p1;
	if(head==NULL)return head;
	p1=head;p=NULL;
	while(p1->data==m)p1=p1->next;
	head=p=p1;
	while(p1)
	{
		if(p1->data!=m&&p!=p1)p=p->next=p1;
		p1=p1->next;
	}
	p->next=NULL;
		return head;
}
struct node *qujiao(struct node *head1,struct node *head2)
{
	struct node *p1=head1,*p2=head2,*k,*m;
	k=NULL;int a[11]={0};
    while(p1){a[p1->data]++;p1=p1->next;}while(p2){a[p2->data]++;p2=p2->next;}
	for(p1=head1;p1;p1=p1->next)
	{
		for(p2=head2;p2;p2=p2->next)
		 if(p1->data==p2->data)break;
		 if(p2!=NULL&&a[p1->data]>=2&&k==NULL){m=k=p1;a[p1->data]=0;}
		  else if(p2!=NULL&&a[p1->data]>=2){k=k->next=p1;a[p1->data]=0;}
	}
	k->next=NULL;
	return m;
}
struct node *fun(struct node *head)//插入法递归排序 
{
	struct node *p,*q,*k,*m;
	if(head==NULL||head->next==NULL)return head;
	p=q=head;
	while(p->next)q=p,p=p->next;
	q->next=NULL;
	if(head->next)head=fun(head);
	m=k=head;
	while(k&&k->data>=p->data){m=k,k=k->next;}
	if(k==head){p->next=head;head=p;} 
	else m->next=p,p->next=k;
	return head;
}
int main()
{
	struct node *head;
	head=create5(5);
head=head->next;
    //put(head);
}
