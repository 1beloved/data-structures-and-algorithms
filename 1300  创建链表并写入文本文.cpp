//输入一个整数n，建立链表，把0～n－1中整数作为链表结点键值并把链表内容保存到文件data.txt中。
//
//如果n＝5, 则文件中存储的内容为“0->1->2->3->4”
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ListNode{
    int data;
    struct ListNode* next;
}Node;
 
struct ListNode* creatList(struct ListNode *head,int n)
{
    struct ListNode *p,*q;
    int i=0;
    head=p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->data=i++;
    p->next=NULL;
    while(i<n)
    {
     
        q=(struct ListNode*)malloc(sizeof(struct ListNode));
        q->data=i++;
        p->next=q;
        p=p->next;
    }
    p->next=NULL;
    return head;
}
 
 
int main()
{
    struct ListNode* head,*p;
    int n;
    scanf("%d",&n);
    head=creatList(head,n);
//  print(head);
    FILE *fp=fopen("data.txt","wb+");
    p=head;
    while(p)
    {
        fprintf(fp,"%d",p->data);
        if(p->next!=NULL)
        fputs("->",fp);
        p=p->next;
    }
    fclose(fp);
     
     
     
     
}
