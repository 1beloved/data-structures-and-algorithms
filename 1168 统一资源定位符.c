//　　统一资源定位符（Uniform Resource Locator，缩写为URL）
//是对可以从互联网上得到的资源的位置和访问方法的一种简洁的表示，
//是互联网上标准资源的地址。互联网上的每个文件都有一个唯一的URL，
//它包含的信息指出文件的位置以及浏览器应该怎么处理它。 
//典型的URL语法应该如下： 
//// http://dict.bing.com.cn/#%E5%B0%8F%E6%95%B0%E7%82%B9 
//// http://www.mariowiki.com/Mushroom
////  https://mail.google.com/mail/?shva=1#inbox
////   http://en.wikipedia.org/wiki/Bowser_(character) 
////   http://fync.acmclub.com/ ftp://222.207.30.4/
////    http://www.int255.com:8080/bbs/
//	现在你的任务是从给定的URL中找出域名。



//http://dict.bing.com.cn/#%E5%B0%8F%E6%95%B0%E7%82%B9
//http://www.mariowiki.com/Mushroom
//https://mail.google.com/mail/?shva=1#inbox


//dict.bing.com.cn
//www.mariowiki.com
//mail.google.com
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    while((scanf("%s",a))!=EOF)
    {
        char *p=a,b[100],*q=a;
        while(*p!='/')p++;
        q=p+=2;
        while(*q!='/'&&*q!=':') q++;//端口号也要算进去 
        *q='\0';
        strcpy(b,p);
        puts(b);
    }
    
}
