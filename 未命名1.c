#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>
int main(void){
 
   int fd=open("1.txt",O_RDWR+O_CREAT);
   if(fd==-1){
      printf("can not open the file\n");
      return 1;
   }
   char buf[1024]={"Linux下C软件设计"};
   int len=write(fd,buf,strlen(buf));
   close(fd);
 
   return 0;
 
}
