#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{   int guess=0;
	int ret = rand()%100+1;
//	printf("%d\n",ret); 
     
     while(1)
     {
     	  printf("请猜数字\n");
     	  scanf("%d",&guess);
     	if(guess>ret)
     	  printf("你猜大了喔\n");
     	else if(guess<ret)
     	  printf("你猜小了喔\n");
     	else 
		  printf("你猜对了喔");  
	 }
	
}
void menu()
{
	printf("***********************\n");
	printf("**  1:game    0:exit **\n");
	printf("***********************\n");
}
int main()
{     	srand((unsigned int)time(NULL));
		int input = 0;
	do
	{
	
		menu();
		printf("请输入数字：\n");
		scanf("%d",&input);
		switch(input)
		{
			case 1: 
			    printf("开始进入猜数字游戏\n");
			    game();
				break;
			case 0: 
			    printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while(input);
	
	return 0;
}