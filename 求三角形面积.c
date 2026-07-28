#include <stdio.h>
#define PI 3.14
float ComputeArea(float r);
int main()
{
		float r=3.3;
		float sum=0;
		sum=ComputeArea(r);
		printf("area is %.2f",sum);
}
float ComputeArea(float r)
{
	return PI*r*r;	
} 
