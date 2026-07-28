#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#define N 10000
int count;//表示当前系统有多少个学生 
char xh[N][N];//学号 
char name[N][N];//姓名 
float cj[N][3];//成绩 0为语文 1为数学 2为英语 
float zcj[N];//总成绩 
void appear(int flag)//显示函数 
{ 
	if(count==0){
		printf("暂无数据!!!\n");
		printf("按任意键退出\n");
		getchar();
		return;
	}
	printf("\n\n\n\n______________________________________________________________________\n\n");
	printf("学号----------姓名-------------------成绩--------------------总成绩:\n");
	int i;
	for(i=0;i<count;i++)
	{
		printf("%s\t\t%s\t\t%.2f %.2f %.2f\t\t%.2f\n",xh[i],name[i],cj[i][0],cj[i][1],cj[i][2],zcj[i]);
	}
	printf("______________________________________________________________________\n\n\n\n\n");
	if(flag==1){
		printf("按任意键退出\n");
	getchar();
	}
}
void print(int i)//打印函数 
{
	printf("\n\n\n\n\n______________________________________________________________________\n");
	printf("学号----------姓名-------------------成绩------------总成绩:\n");
	printf("%s\t\t%s\t\t%.2f %.2f %.2f\t\t%.2f\n",xh[i],name[i],cj[i][0],cj[i][1],cj[i][2],zcj[i]);
	printf("______________________________________________________________________\n\n\n\n\n");
		 printf("正在返回中（请等待）\n");
		Sleep(3000);
	
}
void find()//查找函数 
{
	if(count==0) {
		printf("系统无成员\n");
		printf("按任意键退出\n");
		getchar();
		return; 
	}
	int flag;
	printf("按1学号查询    2姓名查询:");
	while(1)
	{
		char t[30];
		scanf("%d",&flag);
		if(flag==1)
		{
				printf("请输入查找学号:");
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,xh[i])==0) {
						print(i);
						break;
					}
				}
				if(i==count) printf("查无此人,确定没有输错?o_O\n");
				break;
		}
		else if(flag==2)
		{
					printf("请输入查找姓名:");
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,name[i])==0) {
						print(i);
						break;
					}
				}
				if(i==count) printf("查无此人,确定没有输错?o_O\n");
				break;
		}
		else{
			printf("输入失败  请再输入一次\n");
		}
	 } 

}

int judge(char *res,char *t)//判断名字和学号是否重复 
{
	int i;
	if(strcmp(t,"name")==0)//判断名字 
	{
		for(i=0;i<count;i++)
		{	
			if(strcmp(res,name[i])==0) return 0;
		}
	}
	else{//判断学号 
		for(i=0;i<count;i++)
		{
			if(strcmp(res,xh[i])==0) return 0;
		}
	}
	return 1;
	
}

int judge1(char *res)//判断学号是否正常 
{
	int i;
	for(i=0;i<strlen(res);i++)
	if(!(res[i]>='0'&&res[i]<='9')) return 0;
	return 1;
}
void add()//添加学生 
{
	while(1)
	{
	printf("当前成员%d个\n",count);
	printf("请输入学生的学号(纯数字) 姓名 成绩(语数英)\n");
	char xh1[100],name1[100];
	float cj1[3];
	scanf("%s%s%f%f%f",xh1,name1,&cj1[0],&cj1[1],&cj1[2]);
	if(count==0)//当前没有数据时直接插入 
	{
		if(	judge1(xh1)==0) {
			printf("学号输入有误!!\n");return;
		}
		strcpy(name[count],name1);
		strcpy(xh[count],xh1);
		cj[count][0]=cj1[0];
		cj[count][1]=cj1[1];
		cj[count][2]=cj1[2];
		zcj[count]=cj1[2]+cj1[0]+cj1[1];
		count++;
	}
	else{
		if(judge(name1,"name")&&judge1(xh1)&&judge(xh1,"xh"))//都符合 
		{
			strcpy(name[count],name1);
			strcpy(xh[count],xh1);
			cj[count][0]=cj1[0];
			cj[count][1]=cj1[1];
			cj[count][2]=cj1[2];
			zcj[count]=cj1[2]+cj1[0]+cj1[1];
			count++;
		}
		else{
			printf("重复!\n");
		}
	}
	int t;
	printf("1退出 其他键继续:");
	scanf("%d",&t);
	getchar();
	if(t==1) return;
	}
}
void change()//修改学生信息 
{
	appear(0);
	if(count==0) {
		printf("系统无成员\n");
		return; 
	}
	while(1)
	{	printf("按1修改学号   2修改姓名 其他键退出:");
		char t[30];	int flag=-1;
		scanf("%d",&flag);
		getchar();
		if(flag==1)
		{
				printf("请输入查找学号:");
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,xh[i])==0) {
						printf("修改为:\n");
						char t1[30];
						scanf("%s",t1);
						if(judge(t1,"xh")==0){
							printf("重复\n");
							break;
						}
						strcpy(xh[i],t1);
						printf("修改成功!!!\n");
						break; 
					}
				}
				if(i==count) printf("查无此人,确定没有输错?o_O\n");
		}
		else if(flag==2)
		{
					printf("请输入查找姓名:");
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,name[i])==0) {
						if(strcmp(t,name[i])==0) {
						printf("修改为:\n");
						char t1[30];
						scanf("%s",t1);
							if(judge(t1,"name")==0){
							printf("重复\n");
							break;
						}
						strcpy(name[i],t1);
						printf("修改成功!!!\n");
						break; 
					}
					}
				}
				if(i==count) printf("查无此人,确定没有输错?o_O\n");
		}
		else return;
	 } 
	printf("正在返回中（请等待）\n");
}
void fun(int i)
{
	printf("请输入修改类型1.语文修改\t\t2.数学修改\t\t3.英语修改:");
	int flag=-1;
	scanf("%d",&flag);
	getchar();
	printf("请输入修改后的值:");
	float f;
	scanf("%f",&f);
	if(flag==1) cj[i][0]=f;
	else if(flag==2) cj[i][1]=f;
	else if(flag==3) cj[i][2]=f;
	else{
		printf("输入错误");
	}
}
void change2()//修改学生成绩 
{
	appear(0);
	if(count==0) {
		printf("系统无成员\n");
		return; 
	}
	int flag;
	while(1)
	{	printf("按1查学号修改\t2查姓名修改\t其他键退出:");
		char t[30];
		scanf("%d",&flag);
		getchar();
		if(flag==1)
		{
				printf("请输入查找学号:");
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,xh[i])==0) {
						fun(i);//调用修改函数 
						zcj[i]=cj[i][2]+cj[i][0]+cj[i][1];//修改后还要重新更新成绩 
						printf("修改成功!!!\n");
						break; 
					}
				}
				if(i==count) printf("查无此人,确定没有输错?o_O\n");
				else break;
		}
		else if(flag==2)
		{
					printf("请输入查找姓名:");
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,name[i])==0) {
						if(strcmp(t,name[i])==0) {
						fun(i);//调用修改函数 
						zcj[i]=cj[i][2]+cj[i][0]+cj[i][1];//修改后还要重新更新成绩 
						printf("修改成功!!!\n");
						break; 
					}
					}
				}
				if(i==count) printf("查无此人,确定没有输错?o_O\n");
				else break;
		}
		else {
			printf("输入有误!");
			return;
		}
	 } 
	 printf("正在返回中（请等待）\n");
		Sleep(3000);
	
}

void rank()//排名函数 
{
	if(count==0) {
		printf("系统无成员\n");
		return; 
	}
	while(1)
	{
		printf("选 1按照学号排序--2按照语文排序---3按照数学排序---4按照英语排序---5按照总分排序:\n");
		int flag=-1;
		scanf("%d",&flag);
		getchar();
		if(flag==1)//学号 
		{
			
		}
		else if(flag==2)//语文
		{
			
		}
		else if(flag==3)// 数学
		{
			
		}
		else if(flag==4)// 英语 
		{
			
		}
		else if(flag==5)//总分 
		{
			
		}
		else{//输入错误的时候 
			printf("输入错误!正在退出!\n");
			printf("正在返回中（请等待）\n");
			Sleep(3000);
			return;
		}
		
	}
	
	
}
void del()//删除函数 
{
	appear(0);
	while(count!=0)
	{
		printf("请输入要删除的学生的学号:");
		char t[30];
		int flag=0;
				scanf("%s",t);
				int i;
				for(i=0;i<count;i++)
				{
					if(strcmp(t,xh[i])==0) {//学号 姓名 成绩 总成绩都要删除 
						memcpy(xh[i],xh[i+1],sizeof(char*)*(count-i));
						memcpy(name[i],name[i+1],sizeof(char*)*(count-i));
						memcpy(cj[i],cj[i+1],sizeof(float*)*(count-i));
						memcpy(zcj+i,zcj+i+1,sizeof(float)*(count-i));
						printf("删除成功!!!\n");
						flag=1;
						count--;
						break; 
					}
				}
				if(count==0) {
					printf("已经无数据\n");
					break;
				}
				if(flag==0) printf("查无此人,确定没有输错?o_O\n");
				printf("1退出\t\t其他键继续\n");
				int x;
				scanf("%d",&x);
				getchar();
				if(x==1) break;
	}
	printf("正在返回中（请等待）\n");
	Sleep(3000);
}



void menu()//菜单 
{
		int t;
		while(1)
		{
			printf("请选择功能:\n");
			printf("\t\t***************************************************************\n");
			printf("\t\t*--------按1显示学生成绩\t\t\t按2查询学生成绩\n");
			printf("\t\t*--------按3显示排名学生成绩\t\t\t按4删除学生成绩\n");
			printf("\t\t*--------按5修改学生信息\t\t\t按6添加学生成绩\n");
			printf("\t\t*--------按7修改学生成绩\t\t\t按0退出\n");
			printf("\t\t***************************************************************\n");
			scanf("%d",&t);
			getchar();
			system("cls");
			switch(t){
				case 1:appear(1);break;//调用查看函数 
				case 2:find();break;//调用查询函数
				case 3:rank();break;//调用排名函数
				case 4:del();break;//调用删除函数
				case 5:change();break;//调用修改函数
				case 6:add();break;//调用添加函数
				case 7:change2();break;//调用修改函数2
				case 0:;return;//退出 
				default:printf("输入错误!!!\n"); 
			}
			system("cls");
		}
}


int main()
{
	while(1)
	{
		int flag;
		printf("\n按1开始   0结束:");
		scanf("%d",&flag);
		getchar();
		if(flag==1)
		{
			menu();
		}
		else if(flag==0)
		{
			break;
		}
		else
		printf("输入错误!!!!");
	}
}
