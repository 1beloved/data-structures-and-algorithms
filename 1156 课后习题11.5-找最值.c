#include <stdio.h>
#include <malloc.h>
typedef struct student{
	int xh;
	char name[20];
	int cj;
	int cj2;
	int cj3;
	struct node *next; 
}stu;

stu *creat(stu *head,int n)
{
	if(n==0) return NULL;
	head=(stu *)malloc(sizeof(stu));
	scanf("%d%s%d%d%d",&head->xh,head->name,&head->cj,&head->cj2,&head->cj3);
	head->next=creat(head->next,n-1);
	return head;
}



int main()
{
	int n,sumcj[3]={0};
	float avecj[3]={0};
	scanf("%d",&n);
	stu *head,*p;
	head=creat(head,n);
	p=head;
	while(p)
	{
		sumcj[0]+=p->cj;sumcj[1]+=p->cj2;sumcj[2]+=p->cj3;
		printf("%d %d %d\n",p->cj,p->cj2,p->cj3);
		p=p->next;
	}


}
