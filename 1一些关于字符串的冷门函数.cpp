#include <stdio.h>
#include <string.h>
int main()
{
	/*字符串切割函数  :char *strtok(char *s, char *delim);
把字符串s按照字符串delim进行分割，然后返回分割的结果。
strtok在s中查找包含在delim中的字符并用NULL(’/0′)来替换,直到找遍整个字符串。
形参s(要分割的字符串)对应的变量应用char s[]=”….”形式，而不能用char *s=”….”形式。
*/
//char buf[]="Golden Global View";
//      char* token = strtok( buf, "G");
//      while( token != NULL )
//      {
//           printf( "%s", token );
//           token = strtok( NULL, "G" );
//      }
	
/*	strstr(char *str,*substr);
参数说明:str为要检索的字符串，substr为要检索的子串。
返回值:返回字符串str中第一次出现子串substr的地址；如果没有检索到子串，则返回NULL。
	char *s="123412351236",*p="1235",*t=NULL;*/
//	t=strstr(s,p);
//	printf("%s",t);  打印12351236 


/*strchr() 用来查找某字符在字符串中首次出现的位置，其原型为：
char * strchr (const char *str, int c);
注意：字符串 str 的结束标志 NUL 也会被纳入检索范围，所以 str 的组后一个字符也可以被定位。
【返回值】如果找到指定的字符则返回该字符所在地址，否则返回 NULL。
*/
//	char s[10000] = "0123456789012345678901234567890";
//    char *p;
//    p = strchr(s,'5');
//    printf("%d\n", p-s);


}
