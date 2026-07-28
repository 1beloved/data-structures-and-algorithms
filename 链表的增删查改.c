#include <stdio.h>
#include <malloc.h>
typedef int SLTDateType;
typedef struct node{
	int num;
	struct node *next;
}SListNode;



struct node *creat2(struct node *head,int x)//动态申请一个空间 
{
	head=(struct node *)malloc(sizeof(struct node));
	head->num=x;
	head->next=NULL;
	return head;
}

void SListPushFront(SListNode** pplist, SLTDateType x)// 单链表的头插
{
	SListNode *p=(SListNode *)malloc(sizeof(SListNode));
	p->next=*pplist;
	p->num=x;
	*pplist=p;
}
// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	struct node *p=*pplist,*pre=*pplist;
	while(p){
		pre=p;
		p=p->next;
	}	
	p=(struct node *)malloc(sizeof(struct node));
	p->num=x;
	p->next=NULL;
	pre->next=p;	
}

void SListPopFront(SListNode** pplist)// 单链表头删
{	
	struct node *p=(*pplist)-> next;
	free(*pplist);
	*pplist=p;

}
// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	if(*pplist==NULL||(*pplist)->next==NULL) free(*pplist);
	SListNode *p=*pplist,*pre=p;
	while(p->next)
	{
		pre=p;
		p=p->next;
	}
	pre->next=NULL;
	free(p); 
}

void print(struct node *p)//单链表打印 
{
	printf("\n现在链表为:");
	while(p)
	{
		printf("%d -> ",p->num);
		p=p->next;
	}
	printf("NULL");
}
// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	while(plist->num!=x&&plist!=NULL) plist=plist->next;
	if(plist) return plist;
	return NULL;
}
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	SListNode *p=(SListNode *)malloc(sizeof(SListNode));
	p->num=x;
	if(pos->next==NULL){
		pos->next=p;
		p->next=NULL;
	}else{
		p->next=pos->next->next;
		pos->next=p;
	}
}
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos)
{
	SListNode *p=pos->next;
	pos->next=p->next;
	free(p);
}// 在pos的前面插入
SListNode* SLTInsert(SListNode** pphead, SListNode* pos, int x){
	SListNode *p=*pphead;
	while(p->next!=pos) p=p->next;
	SListNode *t=(SListNode *)malloc(sizeof(SListNode));
	t->num=x;
	p->next=t;
	t->next=pos;
	return *pphead;
}// 删除pos位置
void SLTErase(SListNode** pphead, SListNode* pos){
	SListNode *p=*pphead;
	while(p->next!=pos) p=p->next;
	p->next=pos->next;
	free(pos);
}
void SLTDestroy(SListNode** pphead){
	SListNode *p=*pphead;
	while(p)
	{
		p=p->next;
		free(*pphead);
		*pphead=p;
		
	}
	printf("\n\n销毁完毕!!");
}
int main()
{
	struct node *head;
	head=creat2(head,2);
	SListPushFront(&head, 1);//前插 
		print(head);
	SListPushBack(&head,3);//尾插 
		print(head);
	SListPopFront(&head);//前删 
		print(head);
	SListPopBack(&head);//尾删 	
print(head);
// 单链表在pos位置之后插入x
	struct node *p=SListFind(head, 2);
	if(p!=NULL) printf("\np找到了%d\n",p->num);
	 SListInsertAfter(p, 3);
	 print(head);
	SListEraseAfter(p);
print(head);
	SListPushFront(&head, 1);//前插 
		print(head);
	head=SLTInsert(&head, p, 6);
	print(head);
SLTErase(&head, p);
print(head);
SLTDestroy(&head);
}
