//输入一个字符串，这个字符串包含了数字和非数字字符。例如：
//a123x456  17960?   302tab5876
//将其中连续的数字作为一个整数，依次存放到一个数组中，不妨将这个数组命名为a。
//对于以上的示例字符串，123存放在a[0]中，456放在a[1]中，余此类推。
//统计共有多少个整数，并依次输出这些整数。


#include <stdio.h>
int main()
{
	char a[100][500],b[100][500];
	int i=0,row=0;
	while((scanf("%s",a[i]))!=EOF){
		int count=0;
		char *q=a[i];
		while(*q)
		{
		    if(!(*q>='0'&&*q<='9'))
		    {
				q++;continue;
			}
			b[row][count++]=*q;
			if(!(*(q+1)>='0'&&*(q+1)<='9'))
			{
				b[row][count]='\0';row++;count=0;
			}
			q++;
		}
	}
	printf("%d\n",row);
	for(i=0;i<row;i++)
	printf("%s ",b[i]);
}
