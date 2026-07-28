#include <stdio.h>
#include <string.h>
#include <malloc.h>
char * intToRoman(int num){
      int digital[]={1,4,5,9,10,40,50,90,100,400,500,900,1000},i;
    char* alphabet[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    char *ret=(char*)malloc(sizeof(char)*16);
    memset(ret,0,sizeof(ret));
    for( i=12;i>=0;i--)
    {
         while(num>=digital[i])
         {
             num-=digital[i];
             strcat(ret,alphabet[i]);
         }
    }
   return ret;
}

int main()
{
	printf("%s",intToRoman(1994));
 } 
