#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define N 5
typedef int Datetype;
typedef struct stack{
	Datetype a[N];
	int top;
}ST;

void StackInit(ST *s)//初始化 
{
	memset(s->a,0,N);
	s->top=-1;
}

int Empty(ST *s)//判断是否为空 
{
	if(s->top==-1) return 1;
	return 0;
}
//入栈 
void StackPush(ST *s,int x)
{
	if(s->top==N-1){
		printf("入栈失败    栈满\n");
		return ;
	}
	s->a[++s->top]=x;
}

//出栈 
int StackPop(ST *s)
{
	if(s->top==-1)
	{
		printf("栈空\n");
		return ;
	}
	printf("出栈元素为:%d",s->a[s->top]);
	return s->a[s->top--];
}
//销毁 
void StackDestory(ST *s)
{
	s->top=-1;	
}
//查看栈 
void StackPrint(ST* s)
{
	printf("\n出栈顺序:\n");
	if(s->top==-1)
	{
		printf("栈空\n");
	}
	int t=s->top;
	while(t!=-1)
	{
		printf("%d -> ",s->a[t]);
		t--;
	}
	
}
int main()
{
	ST s;
	StackInit(&s);
	int i;
	while(1)
	{
		printf("此时的栈顶坐标为:  %d\n",s.top);
		printf("\n1:查看栈  2:入栈  3:出栈   4:销毁栈   :  ");
		scanf("%d",&i);
		switch(i)
		{
			case 1:StackPrint(&s);break;
			case 2:{
				int t;
				printf("\n输入你要入栈的元素:");
				scanf("%d",&t);
				StackPush(&s,t);
			};break;
			case 3:StackPop(&s);break;
			case 4:StackDestory(&s);break;
		}
		if(Empty(&s)==1)
		break;
	}
}
