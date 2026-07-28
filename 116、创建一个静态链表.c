#include <stdio.h>
#include <malloc.h>
struct node{
	int num;
	struct node *next;
};




int main()
{
	struct node a,b,c,e,f,*head=&a;
	a.num=1;
	a.next=&b;
	b.num=2;
	b.next=&c;
	c.num=3;
	c.next=&e;
	e.num=4;
	e.next=&f;
	f.num=5;
	f.next=NULL;
	while(head)
	{
		printf("%d ",head->num);
		head=head->next;
	}
	
	
	
	
} 
