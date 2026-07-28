#include <stdio.h>
#include <math.h>
int main() {
	int a[5],n,m,k,i,t;
	scanf("%d.%d.%d.%d/%d",a+0,a+1,a+2,a+3,&n);
	m=n/8;
	for(i=0; i<m; i++)
		printf("%d.",a[i]);
	k=(m+1)*8-n;
	t=(int)pow(2,k);
	a[m]=a[m]/t*t;
	printf("%d.",a[m]);
	for(i=m+1; i<=3; i++)
		printf("%d.",0);
}
