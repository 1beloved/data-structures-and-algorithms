//insert ： 操作成功不输出任何信息，失败输出error
//display：输出所有结点值，每个值后跟一个"->"，最后输出一个end
//quit：不输出任何信息
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct node{
	int num;
	struct node *next;
}Node;

Node *Insert(Node *head,int n)
{
	if(head==NULL||head->next==NULL)
	{
		if(head==NULL){
			head=(Node*)malloc(sizeof(Node));
			head->num=n;
			head->next=NULL;
			return head;
		}
		else{
			Node *p;
			if(head->num<n){
				p=(Node*)malloc(sizeof(Node));
				p->num=n;
				p->next=NULL;
				head->next=p;
				return head;
			}
			else{
				p=(Node*)malloc(sizeof(Node));
				p->num=n;
				p->next=head;
				return p;
			}
			}
	}	
	Node *p,*q,*t;
	p=q=head;
	while(p->num<n)
	{
		q=p;
		p=p->next;
		if(p==NULL) break;
	}
	if(p!=head)
	{
		t=(Node*)malloc(sizeof(Node));
		t->num=n;
		q->next=t;
		t->next=p;
	}
	else{
		t=(Node*)malloc(sizeof(Node));
		t->num=n;
		t->next=p;
		return t;
	}
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
			head=Insert(head,value);
		}
//		printf("live");
		scanf("%s",p);
	}while(1);
}
