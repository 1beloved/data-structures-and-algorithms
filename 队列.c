#include <stdio.h>
#include <malloc.h>
#define N 10
typedef int Int;
typedef struct queueNode{
	Int a;
	struct queueNode *next;
}Node;

typedef struct Queue{
	Node *head;
	Node *tail;
}Queue;

//初始化
void queueInit(Queue *q)
{
	q->head=NULL;
	q->tail=NULL;
}

//队尾入队列
void queuePush(Queue *q,int x)
{
	if(q->head==NULL)
	{
		Node *node=(Node *)malloc(sizeof(Node));
		node->a=x;
		node->next=NULL;
		q->head=q->tail=node;
	}
	else{
		Node *node=(Node *)malloc(sizeof(Node));
	node->a=x;
	q->tail->next=node;
	q->tail=node;
	q->tail->next=NULL;
	}
} 
//队头出队列
void queuePop(Queue *q)
{
	Node *cur=q->head->next;
	free(q->head);
	q->head=cur;
} 
//获取队列头部元素
Int queueFront(Queue *q)
{
	return q->head->a;	
} 
//获取队列头部元素
Int queueBack(Queue *q)
{
	return q->tail->a;
}
//获取队列中有效元素个数
Int queueSize(Queue *q)
{
	Node *head=q->head;
	int t=0;
	while(head!=NULL)
	{
		printf("%d ",head->a);
		head=head->next;
		t++;
	}
	return t;
} 
//判断队列是否为空
int queueEmpty(Queue *q)
{
	return q->head==NULL;
 } 
 //销毁队列
void queueDestory(Queue *q)
{
	if(q->head==NULL) return;
	while(q->head)
	{
		queuePop(q);	
	}
}

int main()
{
	struct Queue q;
	queueInit(&q);
	queuePush(&q,1);
	queuePush(&q,2);
	queuePush(&q,3);
	queuePush(&q,4);
	printf("%d\n",queueSize(&q));
	printf("队头数据:%d\n",queueFront(&q));
	queuePop(&q);
		printf("队头数据:%d\n",queueFront(&q));
		printf("队尾数据:%d\n",queueBack(&q));
	queueDestory(&q);
	printf("%d",queueEmpty(&q));
		
}
