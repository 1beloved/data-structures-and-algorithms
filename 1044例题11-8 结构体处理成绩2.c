//有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩。读入这10个学生的数据
//要求输出3门课程的总平均成绩
//以及个人平均分最高的学生的数据（包括学号、姓名、3门课程成绩、平均分数）
//101 AAA 80 81 82
//102 BBB 83 84 85
//103 CCC 86 87 88
//104 DDD 89 90 91
//105 EEE 92 93 94
//106 FFF 80 90 100
//107 GGG 85 90 95
//108 HHH 80 85 90
//109 III 90 91 92
//110 JJJ 91 88 87



//85.60 87.90 90.40 
//105 EEE 92 93 94
#include <stdio.h>
typedef struct student{
    int xh;
    char name[20];
    int sk[3];
}stu;
int main()
{
	stu s[10],max;
	int i,j;
	float f,sumsk[3]={0},avemax=0;
	for(i=0;i<10;i++)
	{
		scanf("%d %s %d %d %d",&s[i].xh,s[i].name,&s[i].sk[0],&s[i].sk[1],&s[i].sk[2]);
		sumsk[0]+=s[i].sk[0];
		sumsk[1]+=s[i].sk[1];
		sumsk[2]+=s[i].sk[2];
	}
	sumsk[0]/=10;
	sumsk[1]/=10;
	sumsk[2]/=10;
	printf("%.2f %.2f %.2f\n",sumsk[0],sumsk[1],sumsk[2]);
	max=s[0];
	avemax=(s[0].sk[0]+s[0].sk[1]+s[0].sk[3])/3;
	j=0;
	for(i=0;i<10;i++)
	{
		f=(s[i].sk[0]+s[i].sk[1]+s[i].sk[3])/3;
		if(avemax<f)
		{
			max=s[i];
			avemax=f;
		}
	}
	printf("%d %s %d %d %d",max.xh,max.name,max.sk[0],max.sk[1],max.sk[2]);
	
	
	
}
