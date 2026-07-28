#include <stdio.h>
#include <malloc.h>
typedef struct node{
	char ch;
	struct node *next;
}Node;


int main()
{
	char a[100],*p=a;
	gets(a);
	while(*p)p++;p--;
	Node *head,*b,*q;
	head=(Node*)malloc(sizeof(Node));
	head->ch=*p--;
	b=q=head;
	while(p>=a)
	{
		q=(Node*)malloc(sizeof(Node));
		q->ch=*(p--);
		b=b->next=q;
	}
	b->next=NULL;
	while(head){
		putchar(head->ch);
		head=head->next;
	}
	
}
