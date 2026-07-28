#include <stdio.h>
/*
石头剪刀布是常见的猜拳游戏。石头胜剪刀，剪刀胜布，布胜石头。如果两个人出拳一样，则不分胜负。

一天，小A和小B正好在玩石头剪刀布。已知他们的出拳都是有周期性规律的，比如：“石头-布-石头-剪刀-石头-布-石头-剪刀……”，
就是以“石头-布-石头-剪刀”为周期不断循环的。请问，小A和小B比了N轮之后，谁赢的轮数多？

输入
输入包含三行。
第一行包含三个整数：N，NA，NB，分别表示比了N轮，小A出拳的周期长度，小B出拳的周期长度。0 < N,NA,NB < 100。
第二行包含NA个整数，表示小A出拳的规律。
第三行包含NB个整数，表示小B出拳的规律。
其中，0表示“石头”，2表示“剪刀”，5表示“布”。相邻两个整数之间用单个空格隔开。
输出
输出一行，如果小A赢的轮数多，输出A；如果小B赢的轮数多，输出B；如果两人打平，输出draw。

*/
int main()
{
	int N,N2[101],N1[101],i,j;
	scanf("%d %d %d",&N,&i,&j);
	int t;
	for(t=0;t<i;t++)
	{
		scanf("%d",&N1[t]);
	}
	for(t=0;t<j;t++)
	{
		scanf("%d",&N2[t]);
	}
	t=0;
	int flag=0;//flag以A的次数来判断谁输 
	int N1index=0,N2index=0;
	while(t<N)
	{
		if(N1[N1index]==0)//等于石头的话 
			{
				if(N2[N2index]==0)//为石头不变 
				 flag+=0;
				 else if(N2[N2index]==2)//为剪刀的话flag++
				 	flag++;
				else flag--; 
			}
		else if(N1[N1index]==2)//等于剪刀的话
			{
				if(N2[N2index]==0)//为石头-1
				 flag--;
				 else if(N2[N2index]==2)//为剪刀的话flag
				 	flag+=0;
				else flag++; 
			 } 
		else{//为布 
			if(N2[N2index]==0)//为石头不变 
				 flag++;
				 else if(N2[N2index]==2)//为剪刀的话flag++
				 	flag--;
				else flag+=0; 
		}
		N1index++;
		N2index++;
	N1index%=i;//因为有周期，所以需要判断 
	N2index%=j;
	t++;
	}
	if(flag>0) printf("A");
	else if(flag<0) printf("B");
	else printf("draw");
}
