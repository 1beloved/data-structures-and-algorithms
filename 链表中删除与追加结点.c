//append操作成功，不输出信息，操作失败，则输出error
//delete操作成功，不输出信息，操作失败，输出not found
//display，输出所有结点值，每个值后跟一个"->"，最后输出一个end
//quit，不输出信息
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct node{
	int num;
	struct node *next;
}Node;

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

Node *delete(Node *head,int n)
{
	
	if(head->num==n) return head->next;
	Node *p=head,*q;
	p=find(head,n);
	q=p->next;
	if(p->next==NULL) printf("not found");
	else
	p->next=q->next;
	return head;
}


Node *Insert(Node *head,int n)
{
		if(head==NULL){
			head=(Node*)malloc(sizeof(Node));
			head->num=n;
			head->next=NULL;
			return head;
		}
	Node *p,*q,*t;
	p=head;
	while(p->next) p=p->next;
	q=(Node*)malloc(sizeof(Node));
	q->num=n;
	p->next=q;
	q->next=NULL;
	return head;
}

void print(struct node *p)
{
	if(p==NULL) printf("end");
	else{
		while(p!=NULL)
		{
			printf("%d->",p->num);
			p=p->next;
		}
		printf("end\n");
	}
}


int main()
{
	struct node *head;
	head=NULL;
	int value;
	char a[100],*p;
	p=a;
	scanf("%s",p);
	do{
		if(strcmp(p,"quit")==0)
		{
			break;
		}
		else if(strcmp(p,"display")==0)
		{
			print(head);
		}
		else{
			scanf("%d",&value);
			if(strcmp(p,"append")==0)
			head=Insert(head,value);
			else
			head=delete(head,value);
		}
//		printf("live");
		scanf("%s",p);
	}while(1);
}
