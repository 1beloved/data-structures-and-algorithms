#include "链表模板.cpp"
struct ListNode* create1(struct ListNode* head, int n)
{
	struct ListNode * p, * q;
	q=head = (struct ListNode*)malloc(sizeof(struct ListNode));
	head->val = rand() % 10; n--;
	while (n--)
	{
		p= (struct ListNode*)malloc(sizeof(struct ListNode));
		p->val = rand() % 10;
		q = q->next = p;
	}
	q->next = NULL;
	return head;
}
struct ListNode* fz(struct ListNode* head)
{
	struct ListNode* p, * q, * t;
	p = NULL; q = head;
	while (q)
	{
		t = q->next;
		q->next = p;
		p = q; q = t;
	}
	return p;
}
struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2)
{
	struct ListNode* p, * q ,* newHead = NULL,* t ,* k,* z;
	int flag = 0;//标记着两个链表相加是否大于 9 
	p=head1 = fz(head1);
	q=head2 = fz(head2);
	for (; q && p; q = q->next, p = p->next)
	{
		t=(struct ListNode*)malloc(sizeof(struct ListNode));
		t->next=newHead;newHead=t;
		newHead->val=p->val+q->val+flag;
		flag=0;
		if(newHead->val>9) newHead->val%=10,flag=1;
	}
	if(p==NULL&&q==NULL&&flag) //同长  
	{
		t=(struct ListNode*)malloc(sizeof(struct ListNode));
		t->next=newHead;newHead=t;
		newHead->val=flag;
	}
	else if(p) //head1长  
	{ 
		for(k=p;p->next;p=p->next)
		{
		p->val+=flag; 
		flag=0;
		if(p->val>9) p->val%=10,flag=1;
		}
		p->val+=flag;
		k=fz(k);for(p=k;p->next;p=p->next);
		p->next=newHead;
		return k;
	}
	else if(q) //head2长  
	{
		for(t=q;q->next;q=q->next)
		{
		q->val+=flag;
		flag=0;
		if(q->val>9) q->val%=10,flag=1;
		}
		q->val+=flag;
		t=fz(t);for(q=t;q->next;q=q->next);
		q->next=newHead;
		return t;
	}
	return newHead;
}
int main()
{
	srand(time(NULL));
	struct ListNode* head1,*head2;
	head1 = head2 = NULL;
	head1 = create1(head1, 5);
	head2 = create1(head2, 5);
	print(head1); print(head2);
	print(addInList(head1,head2));
}
