#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;
}SeqList;

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps){
	assert(ps);  // 断言指针不为空
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 0;
}
void SeqListDestroy(SeqList* ps){
	free(ps->a);
	ps->capacity=0;
	ps->size=0;
}

void SeqListPrint(SeqList* ps){
	printf("顺序表的值为:       ");
	int i;
	for(i=0;i<ps->size;i++)
		printf("%d ",ps->a[i]);
	printf("NULL\n");
}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	if(ps->capacity==ps->size)
	{
		 int newCapacity = (ps->capacity == 0 ? 1 : ps->capacity * 2);
        ps->a = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
        assert(ps->a);
        ps->capacity = newCapacity;
	}
	ps->a[ps->size++]=x;
}
void SeqListPushFront(SeqList* ps, SLDateType x){
	  assert(ps);
    // 如果空间不足，则重新分配内存
    if (ps->size == ps->capacity)
    {
        // 新的容量为原来的2倍或者为0
        int newCapacity = (ps->capacity == 0 ? 1 : ps->capacity * 2);
        ps->a = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
        assert(ps->a);
        ps->capacity = newCapacity;
    }
    // 将所有元素后移一位
    int i;
    for ( i = ps->size; i > 0; --i)
    {
        ps->a[i] = ps->a[i - 1];
    }
    ps->a[0] = x;
    ++ps->size;
}
void SeqListPopFront(SeqList* ps){
	assert(ps && ps->size > 0);
    // 将所有元素前移一位
    int i;
    for (i = 0; i < ps->size - 1; ++i)
    {
        ps->a[i] = ps->a[i + 1];
    }
    --ps->size;
}
void SeqListPopBack(SeqList* ps){
	ps->a[ps->size--]=0;
}

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x){
	assert(ps);
	int i;
	for (i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		return i;
	}
	return -1; // 没有找到返回-1
}
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x){
		assert(ps && pos >= 0 && pos <= ps->size);
		// 如果空间不足，则重新分配内存
		if (ps->size == ps->capacity)
		{
			// 新的容量为原来的2倍或者为0
			int newCapacity = (ps->capacity == 0 ? 1 : ps->capacity * 2);
			ps->a = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
			assert(ps->a);
			ps->capacity = newCapacity;
		}
		// 将pos之后的所有元素后移一位
		int i = ps->size;
		for (; i > pos; --i)
		{
			ps->a[i] = ps->a[i - 1];
		}
		ps->a[pos] = x;
		++ps->size;
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos){
		assert(ps && pos >= 0 && pos < ps->size);
	// 将pos之后的所有元素前移一位
	int i = pos;
	for (; i < ps->size-1; ++i)
	{
		ps->a[i] = ps->a[i + 1];
	}
	--ps->size;
}

int main()
{
	//初始化
	struct SeqList ls;
	SeqListInit(&ls); 
	printf("初始化完成:\n");
	while(1)
	{
		int n;
		printf("选择操作:\n\n");
		printf("0为销毁         ");
		printf("1为打印             ");
		printf("2为尾部插入\n");
		printf("3为头部插入     ");
		printf("4为删除头部元素     ");
		printf("5为删除尾部元素\n");
		printf("6为查找值       ");
		printf("7为在pos插入值x      ");
		printf("8为删除在pos的值\n");
		scanf("%d",&n);
		if(n==0) 
		{
			SeqListDestroy(&ls);
			printf("销毁完成\n");
			break;
		}
		if(n==1)
		{
			SeqListPrint(&ls);
		}
		if(n==2)
		{
			int x;
			printf("请输入x的值:");
			scanf("%d",&x);
			SeqListPushBack(&ls,x); 
		}
		if(n==3)
		{
			int x;
			printf("请输入x的值:");
			scanf("%d",&x);
			SeqListPushFront(&ls,  x);
		}
		if(n==4)
		{
			SeqListPopFront(&ls);
		}
		if(n==5)
		{
			SeqListPopBack(&ls);
		}
		if(n==6)
		{
			int x;
			printf("请输入x的值:");
			scanf("%d",&x);
			printf("%d\n",SeqListFind(&ls,  x));
		}
		if(n==7)
		{
			int pos,x;
			printf("请输入pso和x:");
			scanf("%d%d",&pos,&x);
			SeqListInsert(&ls, pos,x);
		 } 
			if(n==8)
		{
			int pos;
			printf("请输入pso:");
			scanf("%d",&pos);
			SeqListErase(&ls,pos);
		 } 
	}
 } 
