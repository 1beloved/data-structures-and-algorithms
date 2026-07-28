#include <stdio.h>
#include <stdlib.h>
#define N 5
void func(int a[N])
{
	int *p=a,*q,t;
//	for(i=0;i<N-1;i++)
//		for(j=i+1;j<N;j++)
//			if(*(p+i)>*(p+j))
//			{
//				t=*(p+i);
//				*(p+i)=*(p+j);
//				*(p+j)=t;
//			}
	for(p=a;p<a+N-2;p++)
		for(q=p+1;q<a+N;q++)
			if(*p>*q)
			{
				t=*p;
				*p=*q;
				*q=t;
			}
	
}
void digui(int a[],int n)
{
	if(n<=0) return;
	int *p,*q,t;
	p=a,q=a+n-1;
	for(p=a;p<q;p++)
		if(*p>*q)
		{
			t=*p;
			*p=*q;
			*q=t;
		}
	digui(a,n-1);
}
int xuanze(int a[],int n)
{
	int *p,*q,*r,t;
	for(p=a;p<a+n-1;p++)
		{
			r=p;
			for(q=p+1;q<a+n;q++)
			{
				if(*q<*r) r=q;
			}
			t=*r;
			*r=*p;
			*p=t;
		}
}

void stick(int a[],int n)
{
	int *p,*q,t;
	for(p=a+1;p<a+n;p++) 
	{
		t=*p;
			for(q=p-1;q>=a&&*q>t;q--)
				*(q+1)=*q;
		*(q+1)=t;
	}
}

void stickd(int a[],int n){
	int *p=a,t;
	if(n<2) return;
	stickd(a,n-1);
	t=a[n-1];
	for(p=a+n-2;p>=a&&*p>t;p--)
		*(p+1)=*p;
	*(p+1)=t;
}




int main()
{
	srand(time(0));
	int a[N],i;
	for(i=0;i<N;i++)
	a[i]=rand()%11;
	stickd(a,N); 
	for(i=0;i<N;i++)
	printf("%d ",a[i]);	
}
