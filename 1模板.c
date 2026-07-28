#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int T,i;
  scanf("%d",&T);
  char pk[51][5]={0},sf[51][5]={0};
  for(i=0;i<T;i++)
    scanf("%s",pk[i]);
  for(i=0;i<T;i++)
  {
	int haxi[128]={0};
	int j,count=0;
	for(j=0;j<4;j++)
		{
			haxi[pk[i][j]]++;
			if(haxi[pk[i][j]]>count) count=haxi[pk[i][j]];
		}
  	if(count==3) strcpy(sf[i],"Yes");
  	else{
  		strcpy(sf[i],"No");
	  }
  	
  }
  
  
  for(i=0;i<T;i++)
    printf("%s\n",sf[i]);
  
  return 0;
}





