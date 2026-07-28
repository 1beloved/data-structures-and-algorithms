#include <string.h>
#include <string.h>
int main()
{
	//strchr() 用于查找字符串中的一个字符，并返回该字符在字符串中第一次出现的位置。
	//返回值是如果在字符串 str 中找到字符 c
	//则函数返回指向该字符的指针
	//如果未找到该字符则返回 NULL。 
	char *p="1234561",ch,*q;
	q=strchr(p,'6');
	printf("%d",q-p);
 } 
