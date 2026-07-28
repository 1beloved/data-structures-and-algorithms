#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <windows.h> 
#define N 1000
int count;//表示当前系统有多少个学生 
char xh[N][N];//学号 
char name[N][N];//姓名 
float cj[N][3];//成绩 0为语文 1为数学 2为英语 
float zcj[N];//总成绩 
void appear(int flag)//显示函数 
{
	if (count == 0) {
		printf("暂无数据!!!\n");
		printf("按任意键退出\n");
		getchar();
		return;
	}
	printf("\n\n\n\n_________________________________________________________________________________");
	printf("                                                                                        \t\t\t\t|\n");
	printf("学号--------------------姓名-------------------成绩--------------------总成绩:\t|\n");
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%s\t\t%s\t\t%.2f %.2f %.2f\t\t%.2f\t|\n", xh[i], name[i], cj[i][0], cj[i][1], cj[i][2], zcj[i]);
	}
	printf("_________________________________________________________________________________\n\n\n\n\n");
	if (flag == 1) {
		printf("按任意键退出\n");
		getchar();
	}
}
void print(int i)//打印函数 
{
	printf("\n\n\n\n_________________________________________________________________________________\n");
	printf("学号--------------------姓名-------------------成绩--------------------总成绩:\t\n");
	printf("%s\t\t%s\t\t%.2f %.2f %.2f\t\t%.2f\n", xh[i], name[i], cj[i][0], cj[i][1], cj[i][2], zcj[i]);
		printf("_________________________________________________________________________________\n\n\n\n\n");
	

}
void find()//查找函数 
{
	if (count == 0) {
		printf("系统无成员\n");
		printf("按任意键退出\n");
		getchar();
		return;
	}
	int flag;
	printf("按1学号查询    2姓名查询:");
	while (1)
	{
		char t[30];
		scanf("%d", &flag);
		if (flag == 1)
		{
			printf("请输入查找学号:");
			scanf("%s", t);
			int i;
			for (i = 0; i < count; i++)
			{
				if (strcmp(t, xh[i]) == 0) {
					print(i);
					break;
				}
			}
			if (i == count) printf("查无此人,确定没有输错?o_O\n");
			break;
		}
		else if (flag == 2)
		{
			printf("请输入查找姓名:");
			scanf("%s", t);
			int i;
			for (i = 0; i < count; i++)
			{
				if (strcmp(t, name[i]) == 0) {
					print(i);
					break;
				}
			}
			if (i == count) printf("查无此人,确定没有输错?o_O\n");
			break;
		}
		else {
			printf("输入失败  请再输入一次\n");
		}
	}
	printf("正在返回中（请等待）\n");
		Sleep(3000);
}

int judge(char* res, char* t)//判断名字和学号是否重复 
{
	int i;
	if (strcmp(t, "name") == 0)//判断名字 
	{
		for (i = 0; i < count; i++)
		{
			if (strcmp(res, name[i]) == 0) return 0;
		}
	}
	else {//判断学号 
		for (i = 0; i < count; i++)
		{
			if (strcmp(res, xh[i]) == 0) return 0;
		}
	}
	return 1;

}

int judge1(char* res)//判断学号是否正常 
{
	if(strlen(res)!=12) return 0;
	int i;
	for (i = 0; i < strlen(res); i++)
		if (!(res[i] >= '0' && res[i] <= '9')) return 0;
	return 1;
}
void add()//添加学生 
{
	while (1)
	{
		printf("当前成员%d个\n", count);
		printf("请输入学生的学号(纯数字且十二位)  姓名  成绩(语数英)\n");
		char xh1[100], name1[100];
		float cj1[3];
		scanf("%s%s%f%f%f", xh1, name1, &cj1[0], &cj1[1], &cj1[2]);
		if (count == 0)//当前没有数据时直接插入 
		{
			if (judge1(xh1) == 0) {
				printf("学号输入有误!!\n"); ;
			}
			strcpy(name[count], name1);
			strcpy(xh[count], xh1);
			cj[count][0] = cj1[0];
			cj[count][1] = cj1[1];
			cj[count][2] = cj1[2];
			zcj[count] = cj1[2] + cj1[0] + cj1[1];
			count++;
		}
		else {
			if (judge(name1, "name") && judge1(xh1) && judge(xh1, "xh"))//都符合 
			{
				strcpy(name[count], name1);
				strcpy(xh[count], xh1);
				cj[count][0] = cj1[0];
				cj[count][1] = cj1[1];
				cj[count][2] = cj1[2];
				zcj[count] = cj1[2] + cj1[0] + cj1[1];
				count++;
			}
			else {
				printf("重复!\n");
			}
		}
		int t;
		printf("1退出 其他键继续:");
		scanf("%d", &t);
		getchar();
		if (t == 1) break;
	}
	printf("正在返回中（请等待）\n");
	Sleep(3000);
}
void change()//修改学生信息 
{
	appear(0);
	if (count == 0) {
		printf("系统无成员\n");
		return;
	}
	while (1)
	{
		printf("按1修改学号   2修改姓名 其他键退出:");
		char t[30];	int flag = -1;
		scanf("%d", &flag);
		getchar();
		if (flag == 1)
		{
			printf("请输入查找学号:");
			scanf("%s", t);
			int i;
			for (i = 0; i < count; i++)
			{
				if (strcmp(t, xh[i]) == 0) {
					printf("修改为:\n");
					char t1[30];
					scanf("%s", t1);
					if (judge(t1, "xh") == 0) {
						printf("重复\n");
						break;
					}
					strcpy(xh[i], t1);
					printf("修改成功!!!\n");
					break;
				}
			}
			if (i == count) printf("查无此人,确定没有输错?o_O\n");
		}
		else if (flag == 2)
		{
			printf("请输入查找姓名:");
			scanf("%s", t);
			int i;
			for (i = 0; i < count; i++)
			{
				if (strcmp(t, name[i]) == 0) {
					if (strcmp(t, name[i]) == 0) {
						printf("修改为:\n");
						char t1[30];
						scanf("%s", t1);
						if (judge(t1, "name") == 0) {
							printf("重复\n");
							break;
						}
						strcpy(name[i], t1);
						printf("修改成功!!!\n");
						break;
					}
				}
			}
			if (i == count) printf("查无此人,确定没有输错?o_O\n");
		}
		else return;
	}
	printf("正在返回中（请等待）\n");
}
void fun(int i)
{
	printf("请输入修改类型1.语文修改\t\t2.数学修改\t\t3.英语修改:");
	int flag = -1;
	scanf("%d", &flag);
	getchar();
	printf("请输入修改后的值:");
	float f;
	scanf("%f", &f);
	if (flag == 1) cj[i][0] = f;
	else if (flag == 2) cj[i][1] = f;
	else if (flag == 3) cj[i][2] = f;
	else {
		printf("输入错误");
	}
}
void change2()//修改学生成绩 
{
	appear(0);
	if (count == 0) {
		printf("系统无成员\n");
		return;
	}
	int flag;
	while (1)
	{
		printf("按1查学号修改\t2查姓名修改\t其他键退出:");
		char t[30];
		scanf("%d", &flag);
		getchar();
		if (flag == 1)
		{
			printf("请输入查找学号:");
			scanf("%s", t);
			int i;
			for (i = 0; i < count; i++)
			{
				if (strcmp(t, xh[i]) == 0) {
					fun(i);//调用修改函数 
					zcj[i] = cj[i][2] + cj[i][0] + cj[i][1];//修改后还要重新更新成绩 
					printf("修改成功!!!\n");
					break;
				}
			}
			if (i == count) printf("查无此人,确定没有输错?o_O\n");
			else break;
		}
		else if (flag == 2)
		{
			printf("请输入查找姓名:");
			scanf("%s", t);
			int i;
			for (i = 0; i < count; i++)
			{
				if (strcmp(t, name[i]) == 0) {
					if (strcmp(t, name[i]) == 0) {
						fun(i);//调用修改函数 
						zcj[i] = cj[i][2] + cj[i][0] + cj[i][1];//修改后还要重新更新成绩 
						printf("修改成功!!!\n");
						break;
					}
				}
			}
			if (i == count) printf("查无此人,确定没有输错?o_O\n");
			else break;
		}
		else {
			break;
		
		}
	}
	printf("正在返回中（请等待）\n");
	Sleep(3000);

}
void swapStrings(char* str1, char* str2) {
	char temp[50];
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void rank() {
	
	
	if (count == 0) {
		printf("系统无成员\n");
		printf("按任意键退出\n");
		getchar();
		return;
	}

	while (1) {
		printf("*****1按照学号排序*****\n*****2按照语文排序*****\n*****3按照数学排序*****\n*****4按照英语排序*****\n*****5按照总分排序*****\n*****0退出:\n");
		int flag = -1;
		scanf("%d", &flag);
		getchar();
		if(flag==0) break;
		char xhrank[N][N], namerank[N][N];
		float cjrank[N][3], zcjrank[N];
		char temp[N]; // 用于交换学号
		float tempScore; // 用于交换成绩
		char tempName[N]; // 用于交换姓名
		int i,j; 
		for ( i = 0; i < count; i++) {
			strcpy(xhrank[i], xh[i]);
			strcpy(namerank[i], name[i]);
			memcpy(cjrank[i], cj[i], sizeof(float) * 3);
		}
		memcpy(zcjrank, zcj, sizeof(float) * count);
		if (flag == 1) { // 学号
			printf("***下面是根据学号从小到大排序***\n");
			for ( i = 0; i < count - 1; i++) {
				for ( j = 0; j < count - 1 - i; j++) {
					if (strcmp(xhrank[j], xhrank[j + 1]) > 0) {
						// 交换学号
						strcpy(temp, xhrank[j]);
						strcpy(xhrank[j], xhrank[j + 1]);
						strcpy(xhrank[j + 1], temp);

						// 交换语文成绩
						tempScore = cjrank[j][0];
						cjrank[j][0] = cjrank[j + 1][0];
						cjrank[j + 1][0] = tempScore;

						// 交换数学成绩
						tempScore = cjrank[j][1];
						cjrank[j][1] = cjrank[j + 1][1];
						cjrank[j + 1][1] = tempScore;

						// 交换英语成绩
						tempScore = cjrank[j][2];
						cjrank[j][2] = cjrank[j + 1][2];
						cjrank[j + 1][2] = tempScore;

						// 交换总分
						tempScore = zcjrank[j];
						zcjrank[j] = zcjrank[j + 1];
						zcjrank[j + 1] = tempScore;

						// 交换姓名
						strcpy(tempName, namerank[j]);
						strcpy(namerank[j], namerank[j + 1]);
						strcpy(namerank[j + 1], tempName);
					}
				}
			}
		}
		else if (flag == 2) { // 语文
			printf("***下面是根据语文成绩由大到小排序***\n");
			for ( i = 0; i < count; i++) {
				for (j = 0; j < count - 1 - i; j++) {
					if (cjrank[j][0] < cjrank[j + 1][0]) {
						// 交换学号
						strcpy(temp, xhrank[j]);
						strcpy(xhrank[j], xhrank[j + 1]);
						strcpy(xhrank[j + 1], temp);

						// 交换语文成绩
						tempScore = cjrank[j][0];
						cjrank[j][0] = cjrank[j + 1][0];
						cjrank[j + 1][0] = tempScore;

						// 交换数学成绩
						tempScore = cjrank[j][1];
						cjrank[j][1] = cjrank[j + 1][1];
						cjrank[j + 1][1] = tempScore;

						// 交换英语成绩
						tempScore = cjrank[j][2];
						cjrank[j][2] = cjrank[j + 1][2];
						cjrank[j + 1][2] = tempScore;

						// 交换总分
						tempScore = zcjrank[j];
						zcjrank[j] = zcjrank[j + 1];
						zcjrank[j + 1] = tempScore;

						// 交换姓名
						strcpy(tempName, namerank[j]);
						strcpy(namerank[j], namerank[j + 1]);
						strcpy(namerank[j + 1], tempName);
					}
				}
			}
		}
		else if (flag == 3) { // 数学
			printf("***下面是根据数学成绩由大到小排序***\n");
			for ( i = 0; i < count; i++) {
				for (j = 0; j < count - 1 - i; j++) {
					if (cjrank[j][1] < cjrank[j + 1][1]) {
						// 交换学号
						strcpy(temp, xhrank[j]);
						strcpy(xhrank[j], xhrank[j + 1]);
						strcpy(xhrank[j + 1], temp);

						// 交换语文成绩
						tempScore = cjrank[j][0];
						cjrank[j][0] = cjrank[j + 1][0];
						cjrank[j + 1][0] = tempScore;

						// 交换数学成绩
						tempScore = cjrank[j][1];
						cjrank[j][1] = cjrank[j + 1][1];
						cjrank[j + 1][1] = tempScore;

						// 交换英语成绩
						tempScore = cjrank[j][2];
						cjrank[j][2] = cjrank[j + 1][2];
						cjrank[j + 1][2] = tempScore;

						// 交换总分
						tempScore = zcjrank[j];
						zcjrank[j] = zcjrank[j + 1];
						zcjrank[j + 1] = tempScore;

						// 交换姓名
						strcpy(tempName, namerank[j]);
						strcpy(namerank[j], namerank[j + 1]);
						strcpy(namerank[j + 1], tempName);
					}
				}
			}
		}
		else if (flag == 4) { // 英语
			printf("***下面是根据英语成绩由大到小排序***\n");
			for (i = 0; i < count; i++) {
				for (j = 0; j < count - 1 - i; j++) {
					if (cjrank[j][2] < cjrank[j + 1][2]) {
						// 交换学号
						strcpy(temp, xhrank[j]);
						strcpy(xhrank[j], xhrank[j + 1]);
						strcpy(xhrank[j + 1], temp);

						// 交换语文成绩
						tempScore = cjrank[j][0];
						cjrank[j][0] = cjrank[j + 1][0];
						cjrank[j + 1][0] = tempScore;

						// 交换数学成绩
						tempScore = cjrank[j][1];
						cjrank[j][1] = cjrank[j + 1][1];
						cjrank[j + 1][1] = tempScore;

						// 交换英语成绩
						tempScore = cjrank[j][2];
						cjrank[j][2] = cjrank[j + 1][2];
						cjrank[j + 1][2] = tempScore;

						// 交换总分
						tempScore = zcjrank[j];
						zcjrank[j] = zcjrank[j + 1];
						zcjrank[j + 1] = tempScore;

						// 交换姓名
						strcpy(tempName, namerank[j]);
						strcpy(namerank[j], namerank[j + 1]);
						strcpy(namerank[j + 1], tempName);
					}
				}
			}
		}
		else if (flag == 5) { // 总分
			printf("****下面是根据总成绩由大到小排序***\n");
			for (i = 0; i < count; i++) {
				for (j = 0; j < count - 1 - i; j++) {
					if (zcjrank[j] < zcjrank[j + 1]) {
						// 交换学号
						strcpy(temp, xhrank[j]);
						strcpy(xhrank[j], xhrank[j + 1]);
						strcpy(xhrank[j + 1], temp);

						// 交换语文成绩
						tempScore = cjrank[j][0];
						cjrank[j][0] = cjrank[j + 1][0];
						cjrank[j + 1][0] = tempScore;

						// 交换数学成绩
						tempScore = cjrank[j][1];
						cjrank[j][1] = cjrank[j + 1][1];
						cjrank[j + 1][1] = tempScore;

						// 交换英语成绩
						tempScore = cjrank[j][2];
						cjrank[j][2] = cjrank[j + 1][2];
						cjrank[j + 1][2] = tempScore;

						// 交换总分
						tempScore = zcjrank[j];
						zcjrank[j]=zcjrank[j+1];
						zcjrank[j + 1] = tempScore;

						// 交换姓名
						strcpy(tempName, namerank[j]);
						strcpy(namerank[j], namerank[j + 1]);
						strcpy(namerank[j + 1], tempName);
					}
				}
			}
		}
		else {
			printf("输入有误，请重新输入有效选项。\n");
			continue;
		}

		// 输出排序结果
		printf("学号\t\t姓名\t\t语文\t\t数学\t\t英语\t\t总分\n");
		for (i = 0; i < count; i++) {
			printf("%s\t%s\t\t%.f\t\t%.f\t\t%.f\t\t%.f\n", xhrank[i], namerank[i], cjrank[i][0],
				cjrank[i][1], cjrank[i][2], zcjrank[i]);
		}
		printf("\n");
	}
	printf("正在返回中（请等待）\n");
	Sleep(3000);

}
void del()//删除函数 
{
	appear(0);
	while (count != 0)
	{
		printf("请输入要删除的学生的学号:");
		char t[30];
		int flag = 0;
		scanf("%s", t);
		int i;
		for (i = 0; i < count; i++)
		{
			if (strcmp(t, xh[i]) == 0) {//学号 姓名 成绩 总成绩都要删除 
				memcpy(xh[i], xh[i + 1], sizeof(char*) * (count - i));
				memcpy(name[i], name[i + 1], sizeof(char*) * (count - i));
				memcpy(cj[i], cj[i + 1], sizeof(float*) * (count - i));
				memcpy(zcj + i, zcj + i + 1, sizeof(float) * (count - i));
				printf("删除成功!!!\n");
				flag = 1;
				count--;
				break;
			}
		}
		if (count == 0) {
			printf("已经无数据\n");
			break;
		}
		if (flag == 0) printf("查无此人,确定没有输错?o_O\n");
		printf("1退出\t\t其他键继续\n");
		int x;
		scanf("%d", &x);
		getchar();
		if (x == 1) break;
	}
	printf("正在返回中（请等待）\n");
	Sleep(3000);
}

void statistic() {
		
	if (count == 0) {
		printf("系统无成员\n");
		printf("按任意键退出\n");
		getchar();
		return;
	}
	while (1) {
		printf("***请说明你想统计的科目***\n");
		printf("********1：语文********\n");
		printf("********2：数学********\n");
		printf("********3：英语********\n");
		printf("********4：总分********\n");
		printf("********其他字母键退出，其他数字键重新输入********\n");
		int n=-1;//选择科目
		int i;
		scanf("%d", &n);
		if(n==-1) break;
		getchar();
		switch (n) {
		case 1: {
			printf("请说出你想统计语文多少分以上的同学");
			int a;
			scanf("%d", &a);
				printf("学号\t\t姓名\t\t语文\t\t数学\t\t英语\t\t总分\n");
			for (i = 0; i < count; i++) {
				if (cj[i][0] > a) {
				
					printf("%s\t%s\t\t%.f\t\t%.f\t\t%.f\t\t%.f\n", xh[i], name[i], cj[i][0],
						cj[i][1], cj[i][2], zcj[i]);
				}
			}
			break;
		}
		case 2: {
			printf("请说出你想统计数学多少分以上的同学");
			int a;
			scanf("%d", &a);
				printf("学号\t\t姓名\t\t语文\t\t数学\t\t英语\t\t总分\n");
			for ( i = 0; i < count; i++) {
				if (cj[i][1] > a) {
				
					printf("%s\t%s\t\t%.f\t\t%.f\t\t%.f\t\t%.f\n", xh[i], name[i], cj[i][0],
						cj[i][1], cj[i][2], zcj[i]);
				}
			}break;
		}
		case 3: {
			printf("请说出你想统计英语多少分以上的同学");
			int a;
			scanf("%d", &a);
			printf("学号\t\t姓名\t\t语文\t\t数学\t\t英语\t\t总分\n");
			for ( i = 0; i < count; i++) {
				if (cj[i][2] > a) {
					
					printf("%s\t%s\t\t%.f\t\t%.f\t\t%.f\t\t%.f\n", xh[i], name[i], cj[i][0],
						cj[i][1], cj[i][2], zcj[i]);
				}
			}break;
		}
		case 4: {
			printf("请说出你想统计总分多少分以上的同学");
			int a;
			scanf("%d", &a);
				printf("学号\t\t姓名\t\t语文\t\t数学\t\t英语\t\t总分\n");
			for (i = 0; i < count; i++) {
				if (zcj[i] > a) {
				
					printf("%s\t%s\t\t%.f\t\t%.f\t\t%.f\t\t%.f\n", xh[i], name[i], cj[i][0],
						cj[i][1], cj[i][2], zcj[i]);
				}
			}break;
		}
		}
		printf("\n\n\n");
	}
		printf("正在返回中（请等待）\n");
				Sleep(3000);return;
}

void menu()//菜单 
{
	int t;
	while (1)
	{
		printf("请选择功能:\n");
		printf("\t\t***************************************************************\n");
		printf("\t\t*--------按1显示学生成绩\t\t\t按2查询学生成绩\n");
		printf("\t\t*--------按3显示排名学生成绩\t\t\t按4删除学生成绩\n");
		printf("\t\t*--------按5修改学生信息\t\t\t按6添加学生成绩\n");
		printf("\t\t*--------按7修改学生成绩\t\t\t按8统计\n");
		printf("\t\t*--------按0退出\n");
		printf("\t\t***************************************************************\n");
		t=-1;
		scanf("%d", &t);
		getchar();
		system("cls");
		switch (t) {
		case 1:appear(1); break;//调用查看函数 
		case 2:find(); break;//调用查询函数
		case 3:rank(); break;//调用排名函数
		case 4:del(); break;//调用删除函数
		case 5:change(); break;//调用修改函数
		case 6:add(); break;//调用添加函数
		case 7:change2(); break;//调用修改函数2
		case 8:statistic();break;
		case 0:; return;//退出 
		default:{
			printf("输入错误!!!\n");
			printf("正在返回中（请等待）\n");
			Sleep(3000);
		}
		}
		system("cls");
	}
}


int main()
{
	system("color 0A");
	while (1)
	{
		int flag;
		printf("\n按1开始   0结束:");
		scanf("%d", &flag);
		getchar();
		if (flag == 1)
		{
			menu();
		}
		else if (flag == 0)
		{
			printf("感谢您的使用!!");
			Sleep(3000);
			break;
		}
		else
			printf("输入错误!!!!");
	}
	
}

