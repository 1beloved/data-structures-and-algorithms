#include <stdio.h>
#define N 100005
int a[N];
fun(int n,int *index)
{
	int j,flag=0;
	for(j=N-1;j>*index;j--)
	{
		
		int sum=a[j]*n+flag;
//		printf("%d %d\n",n,sum);
		a[j]=sum%10;
		if(sum>=10) flag=sum/10;
		else flag=0;
	}
	if(flag!=0){
		a[(*index)--]=flag;
	}

}
print(int *a,int index)
{
		int i;
		for(i=index+1;i<N;i++)
		printf("%d",a[i]);
		putchar(10);
}

int main()
{
	int n;
	scanf("%d",&n);
	if(n==0||n==1) printf("1");
	else{
		a[N-1]=1;
		int i,index=N-2;
		for(i=2;i<=n;i++)
		{
			fun(i,&index);
//print(a,index);
		}
	print(a,index);
//	puts("93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000");
	}
}
