#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ListNode{
	int data;
	struct ListNode* next;
}Node;


struct ListNode* creat(struct ListNode *head)
{
	
	struct ListNode *p,*q;
	int n;
	printf("请输入链表的值(0为结束标志):\n"); 
	scanf("%d",&n);
	if(n==0) return;
	p=head=(struct ListNode*)malloc(sizeof(struct ListNode));
	p->data=n;
	p->next=NULL;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->data=n;
		p->next=q;
		p=p->next;                 //正向创建 
	}
	p->next=NULL;
	return head;
}

Node *chose(Node *head)
{
	Node *pPre,*minPre,*min,*p,*q,*qPre;
	q=head;
	while(q->next)         //    q变例 整个链表 
	{
		p=min=q;            
		while(p)
		{
			if(p->data<min->data)    //特殊头 				--这个不就是一开始判断特殊的头处理了吗？ 
			{
				minPre=pPre;         //pPre的指向   pPre是用来连接每一次找到的最小值  
				min=p;
			}
			pPre=p;
			p=p->next;
		}
		
		if(min!=q)                  //min==q说明一开始的值就是最小的，不用排序   --最开始的不用排 
		{
			if(q==head)             //最小节点非头//处理第一个最小值的情况(也就是全节点最小的值) --非头 
				{
					head=min;
					minPre->next=min->next;
					min->next=q;	   
					qPre=min;		           //qPre 跳到排好的节点的后面(第一次的min就是最小值，qPre也就是第一个节点) 
				}
			else
				{
					minPre->next=min->next; 
					min->next=q;
					qPre=qPre->next=min;       //   qPre->next=min;qPre=qPre->next;这个时候用qPre连接找到的最小值 qPre还是前驱 
				}
			q=min->next;                       //q要移动到继续排序的头 
			continue;                          //以为这个时候找到最小值了，这个最小值不是q，所有 
		}
		q=q->next;            
	}
	return head;
}

struct ListNode* print(struct ListNode*head)//输出排好序的链表 
{
	struct ListNode *p=head;
	while(p)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n"); 
}



int main()
{
	struct ListNode	* head;
	head=creat(head);
	head=chose(head);
	print(head);
}
