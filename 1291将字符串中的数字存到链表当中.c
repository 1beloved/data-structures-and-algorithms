//编写程序用于从键盘读取一个字符串，
//将字符串中所有连续的数字转换为对应的整数并添加到链表中，
//整个字符串处理完毕后输出链表的内容。
//如输入为a25re776 !jk32lss时，输出为25 776 321
//及输出提取的整数的和
#include <stdio.h>
#include <malloc.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
 
Node *creat(char *s,Node *head)
{
    Node *q,*r;
    char *p=s;
    int flag=0,sum=0,first=1,size;
    size=sizeof(Node);
    while(*p)
    {
        if(*p>='0'&&*p<='9')
        {
            sum=sum*10+*p-'0';
            flag=1;
        }else{
            if(flag)
            {
                if(first)
                {
                    head=q=(Node*)malloc(sizeof(Node));
                    q->data=sum;
                    q->next=NULL;
                    first=0;
                    r=head;
                }
                else{
                    q=(Node *)malloc(sizeof(Node));
                    q->data=sum;
                    r=r->next=q;
                    r->next=NULL;
                }
                sum=0;
            }
            flag=0;
        }
        p++;
    }
    if(flag){
        if(first)
                {
                    head=q=(Node*)malloc(sizeof(Node));
                    q->data=sum;
                    q->next=NULL;
                    first=0;
                    r=head;
                }
                else{
                    q=(Node *)malloc(sizeof(Node));
                    q->data=sum;
                    r=r->next=q;
                    r->next=NULL;
                }
    }
    return head;
}
 
print(Node *head)
{
    Node *p=head;
    int sum=0;
    while(p)
    {
        printf("%d ",p->data);
        sum+=p->data;
        p=p->next;
    }
    printf("\n%d",sum);
}
 
 
 
int main()
{
    char a[100];
    scanf("%s",a);
    struct node *head;
    head=creat(a,head);
    print(head);
}
