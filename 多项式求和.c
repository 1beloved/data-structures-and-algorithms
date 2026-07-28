#include <stdio.h>
#include <malloc.h>
typedef struct item{
    int co;
    int ex;
    struct item *next;
}Item;
 
Item *creat(Item *head,int n){
    if(n==0) return NULL;
    head=(Item*)malloc(sizeof(Item));
    scanf("%d",&head->co);
    scanf("%d",&head->ex);
    head->next=creat(head->next,n-1);
    return head;
}
 
Item *add(Item *head1,Item *head2)
{
    Item *head3,*ptr,*t;
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    if(head1->ex>head2->ex) {ptr=head3=head1;head1=head1->next;}
    else if(head1->ex<head2->ex){ptr=head3=head2;head2=head2->next;}
    else {
    head3=(Item *)malloc(sizeof(Item));
    head3->co=head1->co+head2->co;
    head3->ex=head1->ex;
    head1=head1->next;
    head2=head2->next;
    head3->next=NULL;
    }
    ptr=head3;
    while(head1&&head2)
    {
        if(head1->ex>head2->ex){
            ptr=ptr->next=head1;
            head1=head1->next;
        }
        else if(head2->ex>head1->ex)
        {
            ptr=ptr->next=head2;
            head2=head2->next;
        }
        else{
            t=(Item *)malloc(sizeof(Item));
            t->co=head1->co+head2->co;
            t->ex=head1->ex;
            ptr=ptr->next=t;
            head1=head1->next;
            head2=head2->next;
        }
    }
    if(head1==NULL) ptr->next=head2;
    else if(head2==NULL) ptr->next=head1;
    else ptr->next=NULL;
    return head3;
}
 
void print(Item *head)
{
    while(head)
    {
        printf("%d %d ",head->co,head->ex);
        head=head->next;
    }
    printf("\n");
}
int main()
{
    Item *head1,*head2,*head3;
    head1=head2=NULL;
    int n;
    scanf("%d",&n);
    head1=creat(head1,n);
    scanf("%d",&n);
    head2=creat(head2,n);
    head3=add(head1,head2);
    print(head3);
 
} 

