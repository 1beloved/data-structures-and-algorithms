#include <stdio.h>
int a[100005];
int main()
{
	int i,j,n;
	scanf("%d",&n);
	a[0]=a[1]=1;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=a[0];j++)
			a[j]=a[j]*i;
		for(j=1;j<=a[0];j++)
		{
			a[j+1]+=a[j]/10;
			a[j]%=10;
		}
		
		if(a[j]>0)
		{
			while(a[j]>=10)
			{
				a[j+1]+=a[j]/10;
				a[j]%=10;
				j++;
			}
			a[0]=j;
		}

	}
	i=a[0];
	while(a[i]==0) i--;
	for(;i>=1;i--)
	printf("%d",a[i]);
}
